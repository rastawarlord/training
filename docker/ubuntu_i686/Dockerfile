#Ubuntu 32 bit with 
#	gdb, gcc, goodies...


FROM i386/ubuntu:latest
RUN apt update -y && apt install -y gcc gdb make vim socat git wget curl htop iotop iproute2 python3 iputils-ping iftop python-ptrace tcptrace tcptraceroute openssh-server nmap net-tools ltrace netcat sysstat lsof python3 python3-pip python3-dev libssl-dev libffi-dev build-essential nasm strace 
WORKDIR /opt
RUN python3 -m pip install cryptography --no-binary cryptography
RUN python3 -m pip install ROPgadget
RUN git clone https://github.com/fuzboxz/SLAE.git
RUN git clone https://github.com/dibsy/SGDE.git
RUN wget https://raw.githubusercontent.com/ins1gn1a/VulnServer-Linux/master/vuln.c
RUN gcc vuln.c -o vuln -fno-stack-protector -z execstack -mpreferred-stack-boundary=2
RUN git clone https://github.com/radareorg/radare2
RUN radare2/sys/install.sh
RUN mkdir -p /opt/code
RUN useradd rasta -m -s /bin/bash
