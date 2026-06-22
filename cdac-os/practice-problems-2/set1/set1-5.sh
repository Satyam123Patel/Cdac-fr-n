echo -n "Enter first number: "
read num1
echo -n "Enter second number: "
read num2
add=$num1
(( add=$add+$num2 ))
echo $add
