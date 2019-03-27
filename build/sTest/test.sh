#Script to run system test
#It feeds inputs data inputTest.txt and place outputs in output.txt
echo "Running Test.."
while read input; do \
    echo $input | ../quadSolver; \
done < inputTest.txt > output.txt
echo "End of Test!"
