echo -n "Enter first number: "
read num1
echo -n "Enter second number: "
read num2
echo -n "Enter third Number: "
read num3

if (( $num1>$num2 ))
then
	if (( $num1>$num3 ))
	then echo "$num1 is largest number"
	else echo "$num3 is largest number"
	fi
else
	if (( $num2>$num3 ))
	then echo "$num2" "is largest number"
	else echo "$num3" "is larger number"
	fi
fi


