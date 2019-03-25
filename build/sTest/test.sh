echo "Running Test.."
while read input; do \
    echo $input | ../src/quadSolver; \
done < inputTest.txt > output.txt
echo "End of Test!"
