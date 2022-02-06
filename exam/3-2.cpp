/*描述
给定一组点(x,y)，求距离最远的两个点之间的距离。

输入
第一行是点数n（n大于等于2）

接着每一行代表一个点，由两个浮点数x y组成。

输出
输出一行是最远两点之间的距离。

使用cout << fixed << setprecision(4) << dis << endl;输出距离值并精确到小数点后4位。

fixed和setprecision是在<iomanip>头文件里定义的格式控制操作符，需要#include <iomanip>.
注意在内部计算时最好使用double类型，float精准度不能满足本题测试数据要求。*/

#include<iostream>
#include<tuple>
using namespace std;
int main(){
    int n = 0;
    cin >> n;
    tuple <double, double>;
    double x = 0, y = 0;
    
    dot = make_tuple(x,y);
    for (int i = 0; i < n; i++){
        cin >> get<0>(dot) >> get<1>(dot);

        
    }
    
return 0;
}