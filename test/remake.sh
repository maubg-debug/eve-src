#!/bin/bash

EVC=false

touch -m "space in py or rb name.py"
ev | > /dev/null tee "test/space in py or rb name/expected-output"

touch -m run-file.c
ev | > /dev/null tee test/run-file/expected-output

touch -m JavaTest.java
ev | > /dev/null tee test/JavaTest/expected-output

touch -m wa-leave.c
ev | > /dev/null tee test/wa-leave/expected-output

touch -m "space in c name.c"
ev | > /dev/null tee "test/space in c name/expected-output"
