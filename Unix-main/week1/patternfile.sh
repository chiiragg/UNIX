echo "enter the pattern to find:\c"
read pattern
if grep pattern emp.lst
then
echo "pattern found";
else 
echo "pattern not found";
fi
