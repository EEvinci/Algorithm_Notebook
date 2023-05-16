/*
创建一个vector，然后使用push_back函数向其中添加10个元素，再使用pop_back函数删除最后一个元素，最后打印出vector的大小和容量。

创建一个含有10个元素的vector，然后使用迭代器遍历整个vector并打印每个元素。

创建一个vector，然后向其中添加一些元素，使用sort函数对vector进行排序，然后使用binary_search函数查找一个特定的元素是否存在。

创建一个二维vector（vector的vector），然后填充其中的元素并打印。
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // TODO_1
    vector<int> first_vector;
    for (int i = 0; i < 10; i++)
    {
        first_vector.push_back(i + 1);
    }
    first_vector.pop_back(); // pop_back()不需要参数，会自动删除vector中的最后一个元素
    for (int i : first_vector)
    {
        cout << first_vector[i] << " ";
    }
    cout << endl;
    // TODO_2
    vector<int> second_vector(10);
    for(auto it = second_vector.begin(); it != second_vector.end(); it++){
        cout << *it << " ";
    }

    system("pause");
    return 0;

    // TODO_3
    vector<int> 
}