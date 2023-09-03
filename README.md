# cxx介绍
**c++常用语法，含STL库等编程，通过CMakeLists.txt编译实现**

# 开发工具
**使用vs code，安装开发插件C/C++,CMake,CMake Tool等**

# 配置自动化编译调试
新建文件夹 .vscode，然后在文件夹下新建如下2个文件
launch.json和task.json  

**注意**  

 在launch.json文件中"preLaunchTask": "Build soldierGun", // 此处名字，需要通过tasks.json文件 的task lable决定  
 
 **配置完成，按F5即可选择c/c++自动化调试**

 # 课程目录
 **01_helloworld**  
 第一个c++应用程序

 **02_soldier_gun**
 实例化了士兵和枪对象，通过cmake语法及launch.json,task.json实现自动化编译、调试，此章节涉及面较为全面

 **03_singleton_lazy**  
 设计模式之单例(懒汉模式)，表示在一个线程或进程里，对于这个类只实例化一个对象  

  **04_singleton_eager**  
 设计模式之单例(饿汉模式)，表示在一个线程或进程里，对于这个类只实例化一个对象  

 **05_bridge**  
 设计模式之桥接，将抽象部分与实现部分分离，使他们都可以独立的变化  
 引入了抽象类，当定义的类内部的方法使用了virtual和 = 0修饰时，为纯虚函数，也叫抽象类，需要在派生类实现  

 **06_template**  
 函数、类模板  

 **07_smart_poniter**  
 智能指针  

 **08_vector**  
 stl标准模板库，使用vector存储自定义数据结构  

 
 





