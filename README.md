# OOP-Related-Bugs-Study-ICSE25-Artifacts
This is the project repository of our ICSE 2025 research paper: A Comprehensive Study of OOP-Related Bugs in C++ Compilers.
The project toally include 8 cpp source files, 2 summary forms and 2 text documents in 4 folders, whici is organized following the instruction below.


  
## dataset

---
This folder contains a summary form file that records the entire detailed information of all the bug reports we explored during our empiricial study, including each of the report's id in its bug repository, its creation date, symptom, priority and severity, title, its bug type and the corresponding sub type according to our classification criteria, necessary compiler options needed provided by the bug presenter(currently not simplified) and modern c++ new features involved in its test code. All of the diagram and statistics provided in our paper can be completely exported from this form.
  
  
## buggyFiles

---

This folder contains new real bugs that have not been discovered by others in GCC and LLVM which we obtain from our generation based testing tool, **OOPFuzz**. The comment at the beginning of the file points out the compiler version that we discovered the bug. We have submitted bug reports for each of the tests in this folder.

Pay attention that there's 8 source code files in the repository but 9 in our paper. This is because buggyfile #5 has been submitted twice on both compilers for accept invalid on LLVM and diagnostic error on GCC, as GCC correctly rejects the code but gives ambiguous error message.
  
  
## keywords
---
This folder involves a summary table recording the keyword set that we used to fliter OOP related bug reports from the repository. Note that we have manually reconfirmed the reports after getting them with script.


  
## supplement
---
Here we produce the supplementary material that is too long to introduce in our paper. Currently it contains 1 document that explains the detailed taxonomy of the bug types(and their sub types) in our empiricial study. Note that the first 4 categories(encapsulation, inheritance and polymorphism) have higher priority, which means they will be firstly chosen if there's any controversy on belonging of certain tests.

