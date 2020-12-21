echo '# of files in data.dat are: ' 
cat data.dat | wc -l
echo '# of lines contain “dolor” or “dalor” are: ' 
grep -o -i -e dalor -e dolor data.dat | wc -l
echo "# of words in data.dat are : "
cat data.dat | wc -w
echo "# of words starting with "mol": "
grep '\bmol' data.dat | wc -l

