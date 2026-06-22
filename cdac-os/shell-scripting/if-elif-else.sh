
echo -n "Enter number 1: "
read num1
echo -n "Enter number 2: "
read num2
if (( $num1<$num2 ))
then echo "$num1 < $num2 (num 2 is big)"
elif (( $num1>$num2 ))
then echo "$num1 > $num2 (num 1 is bigger)"
else echo "Both are same numbers"
fi      
