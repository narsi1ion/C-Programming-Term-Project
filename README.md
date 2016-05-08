# C-Programming-Term-Project
Using C and a little bit of python for visuals, I made a working model of a simple Goodwin's Oscillator. This is a model of a negative feedback loop that regulates gene expression, and the simplest consists of 3 Ordinary Differential Equations. Don't know what this is? Take a look at TKlettl_Project_F2015.pdf for an introduction to what any of this stuff even is.

To play with this model, you will need a C compiler and Python. You can change the values of the parameter definitions in Goodwin.h. You can also mess around with the graphs of the results by editing plot.py. Once you're done, save the files, and enter the following on the linux command line:

make MyProject && ./MyProject > output.dat && python plot.py

Et voila!
