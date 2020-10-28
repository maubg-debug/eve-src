#!/bin/bash

print-status() {
  if [ $1 == true ]; then
    echo "PASSED"
  else
    echo "FAILED"
  fi
}

EVC=false

# Test run-file
echo ' - run-file -'
status=true
rm test/run-file/*.out.user &> /dev/null
touch -m run-file.c
echo "ignore-blanks     " > test/run-file/run-file.9.in
echo >> test/run-file/run-file.9.in
echo >> test/run-file/run-file.9.in
echo "correct       " > test/run-file/run-file.9.out
echo >> test/run-file/run-file.9.out
echo >> test/run-file/run-file.9.out
ev | > /dev/null tee test/run-file/actual-output
cmp -s test/run-file/actual-output test/run-file/expected-output
if [ $? -eq 1 ]; then
  status=false
fi
if [ -e "test/run-file/run-file.5.out.user" ] && [ -e "test/run-file/run-file.5.out.user" ]; then
  if [ "$(ls -l test/run-file/*.out.user | wc -l | sed 's/ *//g')" != "2" ]; then
    status=false
  fi
else
  status=false
fi
print-status $status
rm run-file.out
rm test/run-file/actual-output

# Test wa-leave
echo ' - wa-leave -'
status=true
rm test/wa-leave/*.out.user &> /dev/null
touch -m wa-leave.c
ev | > /dev/null tee test/wa-leave/actual-output
cmp -s test/wa-leave/actual-output test/wa-leave/expected-output
if [ $? -eq 1 ]; then
  status=false
fi
if [ ! -e "test/wa-leave/wa-leave.1.out.user" ]; then
  status=false
fi
if [ ! -e "wa-leave.out" ]; then
  status=false
fi
print-status $status
rm wa-leave.out
rm test/wa-leave/actual-output

# Test space in py or rb name
echo ' - space in py or rb name -'
status=true
touch -m "space in py or rb name.py"
ev | > /dev/null tee "test/space in py or rb name/actual-output"
cmp -s "test/space in py or rb name/actual-output" "test/space in py or rb name/expected-output"
if [ $? -eq 1 ]; then
  status=false
fi
print-status $status
rm "test/space in py or rb name/actual-output"

# Test space in c name
echo ' - space in c name -'
status=true
touch -m "space in c name.c"
ev | > /dev/null tee "test/space in c name/actual-output"
cmp -s "test/space in c name/actual-output" "test/space in c name/expected-output"
if [ $? -eq 1 ]; then
  status=false
fi
print-status $status
rm "test/space in c name/actual-output"

# Test JavaTest
echo ' - JavaTest -'
status=true
rm test/JavaTest/*.out.user &> /dev/null
touch -m JavaTest.java
ev | > /dev/null tee test/JavaTest/actual-output
cmp -s test/JavaTest/expected-output test/JavaTest/actual-output
if [ $? -eq 1 ] || [ ! -e "JavaTest.class" ]; then
  status=false
fi
if [ -e "test/JavaTest/JavaTest.6.out.user" ]; then
  if [ "$(ls -l test/JavaTest/*.out.user | wc -l | sed 's/ *//g')" != "1" ]; then
    status=false
  fi
else
  status=false
fi
print-status $status
rm test/JavaTest/actual-output
rm JavaTest.class
