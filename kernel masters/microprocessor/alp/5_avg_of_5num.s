MVI D 05h
MVI A 00h
LABEL1:ADD M
20 INX H
DCR D
JNZ LABEL1
MVI D 05h
MVI B 00h
LABEL2:INR B
SUB D
JNZ LABEL2
MOV A B
STA 4005h
HLT
