#!/bin/bash
#Check Error Script
echo "Try to find out some errors!!!"
# Search for the words which can be matched by regex [^a]*ce
# And save the output to file "Result"
echo "The regex [^a]*ce can match the string(S):" > Result
grep "[^a]*ce"-q << END
Result
lance
ace
brace
decide
piece
END

# Check the existence of file "Result"
# Send the content in "Result" to your emailbox
ls $0 Result
# $1 is replaced by your campusID
 mail lparham2@student.gsu.edu < Result
# $1 is replaced by your campusID
echo "The result has been sent to ${1}lparham2@student.gsu.edu"
echo "Congratulations! You have corrected all the errors!"
#END of Script
