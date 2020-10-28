#!/bin/bash

print-status() {
  if [ $1 == true ]; then
    echo "PASADO"
  else
    echo "FALLADO"
  fi
}

EVC=false

echo ' - run-file -'
status=true
rm test/run-file/*.out.user &> /dev/null
touch -m run-file.c
echo "Ignora-espacios     " > test/run-file/run-file.9.in
echo >> test/run-file/run-file.9.in
echo >> test/run-file/run-file.9.in
echo "Correcto       " > test/run-file/run-file.9.out
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

echo ' - wa-leave -'
status=true
rm test/wa-leave/*.out.user &> /dev/null
touch -m wa-leave.c
eve | > /dev/null tee test/wa-leave/actual-output
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

echo ' - espacio en el nombre py o rb -'
status=true
touch -m "espacio en py o rb nombre.py"
ev | > /dev/null tee "test/space en py o rb nombre/actual-output"
cmp -s "test/space en nombre py o rb/actual-output" "test/space en py o rb nombre/expected-output"
if [ $? -eq 1 ]; then
  status=false
fi
print-status $status
rm "test/space in py or rb name/actual-output"

echo ' - espacio en c nombre -'
status=true
touch -m "espacio en c nombre.c"
ev | > /dev/null tee "test/space en c nombre/actual-output"
cmp -s "test/space en c name/actual-output" "test/space in c name/expected-output"
if [ $? -eq 1 ]; then
  status=false
fi
print-status $status
rm "test/space in c name/actual-output"

echo ' - TestJava -'
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
