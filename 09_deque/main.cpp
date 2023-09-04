#include <iostream>
#include <deque>
#include<algorithm>


using namespace std;

void printInfo(deque<int> &d){
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << "data: " << *it << endl;
    }
}

void testDeque()
{
    deque<int> data;

    data.push_back(1);
    data.push_back(2);
    data.push_front(3);
    data.push_front(4);

    cout << "deque<int> data size: " << data.size()<<endl;
    cout << "deque<int> data raw: "<<endl;
    printInfo(data);

    // 分别从头、尾取出一个数字
    cout << "deque<int> data pop_front: "<<endl;
    data.pop_front(); // 3,1,2
    printInfo(data);

    cout << "deque<int> data pop_back: "<<endl;
    data.pop_back(); // 3,1
    printInfo(data);

    // 插入元素
    cout << "deque<int> data insert: "<<endl;
    data.insert(data.begin()+1, 3, 10); // 3,10,10,10,1
    printInfo(data);

    // 对deque排序，去掉一个最高分和最低分
    cout << "deque<int> data insert: "<<endl;
    sort(data.begin(), data.end());
    data.pop_front();
    data.pop_back();
    printInfo(data);


}

int main(void)
{
    testDeque();

    return 0;
}