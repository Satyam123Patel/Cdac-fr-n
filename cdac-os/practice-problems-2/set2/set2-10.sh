folder="${1:-.}"

# Check if folder exists
if [[ ! -d "$folder" ]]; then
    echo "Error: $folder is not a directory"
    exit
fi
 
files=$(find "$folder" -type f | wc -l)
dirs=$(find "$folder" -type d | wc -l)
links=$(find "$folder" -type l | wc -l)

echo "Files: $files"
echo "Dir: $dirs"
echo "Link: $links"
