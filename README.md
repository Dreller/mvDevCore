# mvDevCore

First of all, please, consider [MultiValue Website](https://www.pickmultivalue.com) for reliable information about this kind of powerful system.  

You are welcome to submit any kind of issue, I will do my best to answer and add feature requests on the roadmap.

## Project
This project exists to supply various tools for developers in MV systems.

## Actually working on... 
Creating DICT items from a flat file.

### Goal
- Create files, DICT items and records from a simple list of items, to help creating required artifacts.

### What I have done 
- [x] Built `DC.CREATE.FILE` that create Files and Q-pointers from a flat file.
- [x] Added `DC.HEAD` to display a nice heading when starting a program.
- [x] Built `DC.CREATE.DICT`that create DICT items (D, I, A, S, X and PH types).

### What I have learnt
- Had to use `OPTION CATALOGUE.LOCAL` because openQM copied the program in a private space instead creating the VOC, or just use CATALOG file, program LOCAL for the same result.
- Built a Paragraph to quickly compile and run a program, see [Gist VOC B](https://gist.github.com/dreller2034/8fce9cc4dc531f72748d30aef8f532e4).
- Used `ERR.H` from `SYSCOM` for error handling.
- Tried to establish a comment design template for further usage.
- Discovered we can use a @-Variable directly at TCL, example: `DISPLAY <<@LOGNAME>>`, pretty cool!
