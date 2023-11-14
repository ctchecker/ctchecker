# CtChecker: a Precise, Sound and Efficient Static Analysis for Constant-Time Programming


- [CtChecker: a Precise, Sound and Efficient Static Analysis for Constant-Time Programming](#ctchecker-a-precise-sound-and-efficient-static-analysis-for-constant-time-programming)
  - [Intro](#intro)
  - [System Requirements](#system-requirements)
  - [Building the Toolchain](#building-the-toolchain)
  - [Running the Cryptographic Library Benchmark](#running-the-cryptographic-library-benchmark)
  - [Running the Benchemark on Rewritten Code by Constantine](#running-the-benchemark-on-rewritten-code-by-constantine)
  - [Running the Comparison with SC-Eliminator on Their Benchmarks](#running-the-comparison-with-sc-eliminator-on-their-benchmarks)


## Intro

This is the benchmark repo for the peer-reviewed submission of the paper. The repo has been anonymized for review purposes. A walkthrough of how to use the benchmark and reproduce the results in the paper will be provided in the following sections. All source code are provided for the benchmark libraries and the rewritten code by Constantine.

## System Requirements

We've been building the system under Ubuntu 18.04, which provides the best compatibility of softwares used and convenience in compiling the version of Linux we are analyzing. The instructions in this documentation assumes the user is running this version of Ubuntu Linux.

## Building the Toolchain

1. Before building, make sure to check:

- The system's default 'python' is linked to a python2 executable. Check by `python --version`.
- gcc-5 is installed for compiling the LLVM 3.7.1 version. Use `gcc -v` to check version. 
- Use `update-alternatives` to change default `python` and `gcc` of the system if versions does not match.

2. Clone the project. 

3. To build the toolchain, run the commands below.

```sh
# First direct to project's root dir
cd /PATH_TO_LLVM_DIR

# Configure the project under root and run 'make' to build LLVM
./configure
make

# Direct to projects folders, configure and make for each package.
cd projects/poolalloc/
./configure
make

cd ../llvm-deps/
./configure
make
```

## Running the Cryptographic Library Benchmark

```sh
# Direct to the benchmark folder
cd /PATH_TO_LLVM_DIR/projects/llvm-deps/mod_exp_tests

# Running the analysis
# This script runs all four crypto libraries and their variations for comparison with ct-verif
./runall.sh
```
The results for this benchmark located under the directory `/PATH_TO_LLVM_DIR/projects/llvm-deps/mod_exp_tests/results`, where four sub-folder will be created. The `full` folder is for full source versions, `min` for the minimal source versions, `ct_verif_files` for ct-verif's minimal source code versions, and `ct_verif_files_full` for ct-verif's full source code version.

## Running the Benchemark on Rewritten Code by Constantine

```sh
# Direct to the benchmark folder
cd /PATH_TO_LLVM_DIR/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/Constantine

# Running the analysis
# This script runs all algorithms that are successfully translated back to C source file
./test.sh
```

The results for Constantine rewritten code are located under each algorithm's own folder. The aggregated result will be created under Constantine root folder.

## Running the Comparison with SC-Eliminator on Their Benchmarks

```sh
# Direct to the benchmark folder for SC-Eliminator
cd /PATH_TO_LLVM_DIR/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/SC-Eliminator-original

# Running the analysis
# This script runs benchmarks in SC-Eliminator paper
./test.sh
```

The results are collected under "SC-Eliminator-original" folder, named "results-ctchecker.csv".