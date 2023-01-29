IFS="|"
while echo "Enter department code:\c";do
read code
set -- `grep "^$code" <<limit
01|Accounts|1234
02|Admin|134
03|Marketing|134
04|personnel|123
05|production|11234
limit`
case $# in
3)echo "Department Name:$2\nEmp-Id of head of dept:$3\n"
shift 3;;
*)echo "Invalid Department Code"
esac
done
