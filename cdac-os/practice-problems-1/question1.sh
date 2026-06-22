
#a
touch server.log

cat > server.log <<'EOF'
[INFO] Server started at 10:00 AM
[ERROR] Database connection failed
[WARNING] High memory usage detected
[ERROR] Unauthorized access attempt detected
[INFO] Backup completed successfully
EOF

echo " "

#b

grep "ERROR" server.log

echo " "

#c

grep -n "ERROR" server.log

echo " "

#d
grep -n "ERROR" server.log && grep -c "ERROR" server.log

echo " "

#e

sed "s/ERROR/CRITICAL/g" server.log


