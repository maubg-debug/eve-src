#!/bin/bash

EVC=false

touch -m "espacio en py o rb name.py"
eve | > /dev/null tee "test/space in py or rb name/expected-output"

touch -m run-file.c
eve | > /dev/null tee test/run-file/expected-output

touch -m JavaTest.java
eve | > /dev/null tee test/JavaTest/expected-output

touch -m wa-leave.c
eve | > /dev/null tee test/wa-leave/expected-output

touch -m "espacio en nombre.c"
eve | > /dev/null tee "test/space in c name/expected-output"
