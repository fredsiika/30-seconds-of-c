#!/bin/sh

echo "Starting test script...\n"

sleep 1
echo "Testcase 1: \n ./a.out vincent mit "l'ane" dans un pre et "s'en" vint"
echo "Result: \n" 
./a.out vincent mit "l'ane" dans un pre et "s'en" vint | cat -e 

sleep 1 
echo "Testing: \n" 
echo "Result: \n" 
./a.out "j'aime le fromage de chevre" | cat -e

sleep 1
echo "Test 3..."
./a.out | cat -e

echo "Test case complete!"
echo "Use lldb debugger to double-check any edge cases."
