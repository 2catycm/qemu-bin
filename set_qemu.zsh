my_path=${0:A:h}
qemu-as-7.0-4Ki(){
  echo "正在设置Qemu为 7.0-4Ki"
  echo "当前脚本位置${my_path}"
  export PATH=$PATH:${my_path}/qemu-7.0-4Ki
  echo "设置完成"
}
qemu-as-7.0-16Ki(){
  echo "正在设置Qemu为 7.0-16Ki"
  echo "当前脚本位置${my_path}"
  export PATH=$PATH:${my_path}/qemu-7.0-16Ki
  echo "设置完成"
}

