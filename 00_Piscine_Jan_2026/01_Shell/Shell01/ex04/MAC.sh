ifconfig | grep ether | awk '{print $2}' | sed -e "s/^.*$/&\n/"
