import ipaddress

def calculate__subnet_info(ip, subnet_mask):
    network = ipaddress.IPv4Network(f"{ip}/{subnet_mask}", strict=False)
    network_address = network.network_address
    broadcast_address = network.broadcast_address
    num_hosts = network.num_addresses - 2

    print("IP address: ", ip)
    print("Subnet Mask: ", subnet_mask)
    print("Network Address: ", network_address)
    print("Broadcast Address: ", broadcast_address)
    print("No. of available hosts: ", num_hosts)

def main():
    ip = input("Enter the IP Address: ")
    subnet_mask = input("Enter the subnet mask: ")
    calculate__subnet_info(ip, subnet_mask)

if __name__ == "__main__":
    main()