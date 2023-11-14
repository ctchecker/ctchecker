#!/usr/bin/env python
""" This file parses output from taint/vulnerable branch analysis

After discovering positives from the analysis it can be helpful to view the
results side by side with the source. This code runes through and gets the
source for each reported line.


Usage:
post_analysis.py <result_file>

Sample Usage:
post_analysis.py tmp.dat > positives_with_source.txt
"""
import re
import sys

from collections import defaultdict


def parse_number(num):
    try:
        return int(num)
    except ValueError:
        return float(num)


def filter_lines_from_results(fname):
    """Filters through vulnerable branch dat file for tainted lines"""
    match = "[.a-zA-Z0-9/_-]+.(c|h|cpp|hpp) line [0-9]+"
    match2 = "[.a-zA-Z0-9/_-]+.(c|h|cpp|hpp) at [0-9]+"
    filtered_lines = []
    filtered_lines2 = []
    with open(fname, "r") as f:
        for line in f:
            if re.match(match, line):
                filtered_lines.append(line)
            if re.match(match2, line):
                filtered_lines2.append(line)

    return [filtered_lines, filtered_lines2]


def get_lines_from_source(positives, positives2):
    """Opens file and extracts source associated with tainted result"""
    results = defaultdict(list)
    for k, v in positives.items():
        with open(k, "r") as f:
            lines = f.readlines()  # this may get large for large source files
        for num in sorted(v):
            # Each file has list of tuples with this structure (linenum, source code)
            results[k].append((num + 1, lines[num].strip()))

    results2 = defaultdict(list)
    for k, v in positives2.items():
        with open(k, "r") as f:
            lines = f.readlines()  # this may get large for large source files
        for num in sorted(v):
            # Each file has list of tuples with this structure (linenum, source code)
            results2[k].append((num + 1, lines[num].strip()))

    return [results, results2]


def output_results(lines):
    """Writes out to stdout ex. fn.c line # - source"""
    for fname, result_pair in lines[0].items():
        for line, src in result_pair:
            print("{} line {:4d} - {}".format(fname, line, src))
    for fname, result_pair in lines[1].items():
        for line, src in result_pair:
            print("{} line {:4d} - {}".format(fname, line, src))


def main():
    """Looks at results from Vulnerable/Taint Analysis and records the associated
    line with it
    """
    positives = defaultdict(list)  # only report each line once: set
    positives2 = defaultdict(list)  # only report each line once: set
    # to keep repeated lines use: list

    for line in filter_lines_from_results(sys.argv[1])[0]:
        s = line.strip().split()
        if len(s) == 3:
            fn, _, ln = s
            # Subtract 1 because indices of lines starts at 0
            positives[fn].append(int(ln) - 1)

    for line in filter_lines_from_results(sys.argv[1])[1]:
        s = line.strip().split()
        if len(s) == 3:
            fn, _, ln = s
            # Subtract 1 because indices of lines starts at 0
            positives2[fn].append(int(ln) - 1)

    res = get_lines_from_source(positives, positives2)
    output_results(res)


if __name__ == "__main__":
    main()
