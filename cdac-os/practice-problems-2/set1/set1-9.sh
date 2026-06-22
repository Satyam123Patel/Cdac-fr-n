
if (( "$EUID"==0 )) 
then
    echo "You are running as ROOT user."
else
    echo "You are NOT running as root user."
    echo "Current user: $(whoami)"
fi
