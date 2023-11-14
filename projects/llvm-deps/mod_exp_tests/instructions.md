The table recording number of vulnerable branches of each library can be generated in the following steps.  

- `cd` into `mod_exp_tests` (this folder).
- Open the `runall.sh` file and 
  - edit the file from line 36 to 44 accordingly to select combinations to be run
  - the command follows the pattern `$2 $3 bool bool $5` where 
    - the first `bool` flags white list
    - the second `bool` flags flow sensitivity
    - `$5` flags if using full source
- Since field sensitivity and baseline are in different git branches, we must switch branch to change the flag. To fully generate/update the table, the `runall.sh` should be run in one branch first, the user then copies the table text and paste it into the other branch's same file, then run the script again in this branch. The final file is the appropriate output. *(We might be able to simplify the operations.)*
  - `git checkout <master/baseline>`
- The table itself resides in the folder `../paper/conference/benchmark-table.tex`, it was isolated from the LaTex file `evaluation.tex`. The python script `../processing_tools/post_analysis.py` reads the `.tex` file in a fashion very similar to reading a `.csv` file, then updates the count of the corresponding cell. `runall.sh` can fill in an empty table, e.g. `benchmark-table-empty.tex`, or update an existing table, e.g. `benchmark-table.tex.backup` *(this is the original table)*. But the file always updates the `benchmark-table.tex` file, coded in the `post_analysis.py` file. If you need to change the file to be written to, please edit the python script.
- **The log file, `tmp.dat`, generated by the analysis in each library's folder will be renamed into the format of `tmp-TABLE_COL_NAME.dat`, e.g. `tmp-WL-FS.dat`. You can manually check these files to identify possible problems.**