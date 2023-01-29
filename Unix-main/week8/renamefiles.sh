for file in *.txt;do
left=`basename $file txt`
mv $file ${left}doc
done
