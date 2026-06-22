
if [ $# -eq 0 ]; then
    echo "Usage: $0 <service-name>"
    echo "Example: $0 ssh"
    exit 1
fi

SERVICE="$1"

if systemctl is-active --quiet "$SERVICE"; then
    echo "✓ Service '$SERVICE' is running"
    exit 0
else
    echo "✗ Service '$SERVICE' is not running"
    exit 1
fi

#simplify it later
