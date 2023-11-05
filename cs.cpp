#include <iostream>

// 清屏函数
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// 分割线函数
void printDivider() {
    std::cout << "====================" << std::endl;
}

// 主菜单函数
int mainMenu() {
    https://01.aivu.net/#/chatx
    printDivider();
    std::cout << "请选择服务器核心：" << std::endl;
    printDivider();
    std::cout << "1: forge" << std::endl;
    std::cout << "2: fabric" << std::endl;
    std::cout << "3: cat_server" << std::endl;
    std::cout << "4: mo_server" << std::endl;
    std::cout << "5: bukkit" << std::endl;
    std::cout << "6: spigot" << std::endl;
    std::cout << "7: Paper" << std::endl;
    printDivider();
    std::cout << "按下对应数字按键以继续，输入t退出" << std::endl;
    return 0;
}

// 版本范围选择菜单函数
int versionRangeSelection(const std::string& coreName, const std::string& versionRange) {
    clearScreen();
    printDivider();
    std::cout << "请选择" << coreName << "版本范围：" << std::endl;
    printDivider();
    std::cout << versionRange << std::endl;
    printDivider();
    std::cout << "按下对应数字按键以继续，输入t退出" << std::endl;
    return 0;
}

// 版本选择菜单函数
int versionSelection(const std::string& coreName, const std::string& versionList) {
    clearScreen();
    printDivider();
    std::cout << "请选择" << coreName << "版本：" << std::endl;
    printDivider();
    std::cout << versionList << std::endl;
    printDivider();
    std::cout << "按下对应数字按键以继续" << std::endl;
    return 0;
}

int main() {
    std::string versionRange1 = "1.17系列-1.20系列";
    std::string versionRange2 = "1.8系列-1.16系列";
    std::string versionList1 = "1.20系列\n1.19系列\n1.18系列\n1.17系列\n1.16系列";
    std::string versionList2 = "1.16系列\n1.15系列\n1.14系列\n1.13系列\n1.12系列\n1.11系列\n1.10系列\n1.9系列\n1.8系列";

    mainMenu();
    // 根据用户选择执行相应的操作
    // 例如选择1时，调用 versionRangeSelection("forge", versionRange1);
    // 选择2时，调用 versionRangeSelection("fabric", versionRange2);
    // 其他选择类似
    return 0;
}
