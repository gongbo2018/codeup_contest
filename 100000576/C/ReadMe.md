# 实现中遇到的问题

1. 在比较字符串时用等号
```
student_data[j].no == no

需要改用strcmp比较： strcmp(student_data[j].no,no) == 0
```
1. 死活AC不了，不知道啥原因。