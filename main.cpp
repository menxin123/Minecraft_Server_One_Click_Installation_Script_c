#include <iostream>

//函数声明部分
int main_menu();
int Dividing_line();

//主函数
int main(){
    int result = main_menu();  // 调用函数
    return 0;
}


//代码部分

//清屏部分
   int clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    return 0;
}


//分割线==部分
int Dividing_line() {
    std::cout << "====================" << std::endl;
    return 0;
}

//菜单选择部分

//核心选择部分
int main_menu() {
    clear();
    printf ("请选择服务器核心\n");
    Dividing_line();
    printf ("1: forge\n");
    printf ("2: fabric\n");
    printf ("3: cat_server\n");
    printf ("4: mo_server\n");
    printf ("5: bukkit\n");
    printf ("6: spigot\n");
    printf ("7: Paper\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//forge版本范围选择菜单
int forge_version_range_selection() {
    clear();
    Dividing_line();
    printf ("___请选择版本范围___\n");
    Dividing_line();
    printf ("1: 1.17系列-1.20系列\n");
    printf ("2: 1.8系列-1.16系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//fabric版本范围选择菜单
int fabric_version_range_selection() {
    clear();
    printf ("___请选择版本范围___\n");
    Dividing_line();
    printf ("1: 1.14系列-1.20系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//cat_server版本范围选择菜单
int cat_server_version_selection() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.16.5\n");
    printf ("3: 1.12.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//mo_server版本范围选择菜单
int mo_server_version_selection() {
    clear();
    printf ("请选择服务器核心版本");
    Dividing_line();
    printf ("1: 1.20.1\n");
    printf ("2: 1.19.4\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.18.2\n");
    printf ("5: 1.16.5\n");
    printf ("6: 1.12.2\n");
    printf ("7: 1.7.10\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//bukkit_server版本范围选择菜单
int bukkit_server_version_selection() {
    clear();
    printf ("   请选择版本范围   \n");
    Dividing_line();
    printf ("1: 1.18系列-1.20系列\n");
    printf ("2: 1.9系列-1.17系列\n");
    printf ("3: 1.0系列-1.8系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//spigot_server版本范围选择菜单
int spigot_server_version_selection() {
    clear();
    printf ("   请选择版本范围   \n");
    Dividing_line();
    printf ("1: 1.13系列-1.20系列\n");
    printf ("2: 1.4系列-1.12系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//paper_server版本范围选择菜单
int paper_server_version_selection() {
    clear();
    printf ("   请选择版本范围   \n");
    Dividing_line();
    printf ("1: 1.17系列-1.20系列\n");
    printf ("2: 1.8系列-1.16系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//二级菜单版本系列选择部分

//forge版本系列选择
int forge_version_series_I() {
    clear();
    printf ("1.17系列---1.20系列\n");
    Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    printf ("5: 1.16系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

int forge_version_series_II() {
    clear();
    printf ("1.8系列---1.16系列\n");
    Dividing_line();
    printf ("1: 1.16系列\n");
    printf ("2: 1.15系列\n");
    printf ("3: 1.14系列\n");
    printf ("4: 1.13系列\n");
    printf ("5: 1.12系列\n");
    printf ("6: 1.11系列\n");
    printf ("7: 1.10系列\n");
    printf ("8: 1.9系列\n");
    printf ("9: 1.8系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//fabric版本系列选择
int fabric_version_series_I() {
    clear();
    printf ("1.14系列---1.20系列\n");
    Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    printf ("5: 1.16系列\n");
    printf ("6: 1.15系列\n");
    printf ("7: 1.14系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//bukkit版本系列选择
int bukkit_version_series_I() {
    clear();
    printf ("1.18系列---1.20系列\n");
    Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_series_II() {
    clear();
    printf ("1.9系列---1.17系列\n");
    Dividing_line();
    printf ("1: 1.17系列\n");
    printf ("2: 1.16系列\n");
    printf ("3: 1.15系列\n");
    printf ("4: 1.14系列\n");
    printf ("5: 1.13系列\n");
    printf ("6: 1.12系列\n");
    printf ("7: 1.11系列\n");
    printf ("8: 1.10系列\n");
    printf ("9: 1.9系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_series_III() {
    clear();
    printf ("1.0系列-1.8系列\n");
    Dividing_line();
    printf ("1: 1.8系列\n");
    printf ("2: 1.7系列\n");
    printf ("3: 1.6系列\n");
    printf ("4: 1.5系列\n");
    printf ("5: 1.4系列\n");
    printf ("6: 1.3系列\n");
    printf ("7: 1.2系列\n");
    printf ("8: 1.1系列\n");
    printf ("9: 1.0系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//spigot版本系列选择
int spigot_version_series_I() {
    clear();
    printf ("1.13系列---1.20系列\n");
    Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    printf ("5: 1.16系列\n");
    printf ("6: 1.15系列\n");
    printf ("7: 1.14系列\n");
    printf ("8: 1.13系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_series_II() {
    clear();
    printf ("1.4系列-1.12系列\n");
    Dividing_line();
    printf ("1: 1.12系列\n");
    printf ("2: 1.11系列\n");
    printf ("3: 1.10系列\n");
    printf ("4: 1.9系列\n");
    printf ("5: 1.8系列\n");
    printf ("6: 1.7系列\n");
    printf ("7: 1.6系列\n");
    printf ("8: 1.5系列\n");
    printf ("9: 1.4系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//paper版本系列选择
int paper_version_series_I() {
    clear();
    printf ("1.17系列---1.20系列\n");
    Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_series_II() {
    clear();
    printf ("1.8系列-1.16系列\n");
    Dividing_line();
    printf ("1: 1.16系列\n");
    printf ("2: 1.15系列\n");
    printf ("3: 1.14系列\n");
    printf ("4: 1.13系列\n");
    printf ("5: 1.12系列\n");
    printf ("6: 1.11系列\n");
    printf ("7: 1.10系列\n");
    printf ("8: 1.9系列\n");
    printf ("9: 1.8系列\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}


//三级菜单版本选择部分
//三级菜单下载部分

//forge版本选择
int forge_version_selection_1_20() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.20.1\n");
    printf ("2: 1.20\n");
    Dividing_line();
    printf ("按下对应数字按键以继续");
    return 0;
}
int forge_version_selection_1_19() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.19.4\n");
    printf ("2: 1.19.3\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.19.1\n");
    printf ("5: 1.19\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_18() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.18.1\n");
    printf ("3: 1.18\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_17() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.17.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_16() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.16.5\n");
    printf ("2: 1.16.4\n");
    printf ("3: 1.16.3\n");
    printf ("4: 1.16.2\n");
    printf ("5: 1.16.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_15() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.15.2\n");
    printf ("2: 1.15.1\n");
    printf ("3: 1.15\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_14() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.14.4\n");
    printf ("2: 1.14.3\n");
    printf ("3: 1.14.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_13() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.13.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_12() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.12.2\n");
    printf ("2: 1.12.1\n");
    printf ("3: 1.12\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_11() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.11.2\n");
    printf ("2: 1.11\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_10() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.10.2\n");
    printf ("2: 1.10\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_9() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.9.4\n");
    printf ("2: 1.9\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_8() {
    clear();
    printf ("按下对应数字按键以继续,输入t退出\n");
    Dividing_line();
    printf ("1: 1.8.9\n");
    printf ("2: 1.8.8\n");
    printf ("3: 1.8\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//fabric版本选择
int fabric_version_selection_1_20() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.20.1\n");
    printf ("2: 1.20\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_19() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.19.4\n");
    printf ("2: 1.19.3\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.19.1\n");
    printf ("5: 1.19\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_18() {
    clear();
    printf ("按下对应数字按键以继续,输入t退出\n");
    Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.18.1\n");
    printf ("3: 1.18\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_17() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.17.1\n");
    printf ("2: 1.17\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_16() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.16.5\n");
    printf ("2: 1.16.4\n");
    printf ("3: 1.16.3\n");
    printf ("4: 1.16.2\n");
    printf ("5: 1.16.1\n");
    printf ("6: 1.16\n");
    Dividing_line();
    printf ("按下对应数字按键以继续");
    return 0;
}
int fabric_version_selection_1_15() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.15.2\n");
    printf ("2: 1.15.1\n");
    printf ("3: 1.15\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_14() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.14.4\n");
    printf ("2: 1.14.3\n");
    printf ("3: 1.14.2\n");
    printf ("4: 1.14.1\n");
    printf ("5: 1.14\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//bukkit版本选择
int bukkit_version_selection_1_20() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.20.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_19() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.19.4\n");
    printf ("2: 1.19.3\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.19.1\n");
    printf ("5: 1.19");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_18() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.18.1\n");
    printf ("3: 1.18\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_17() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.17.1\n");
    printf ("2: 1.17\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_16() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.16.5\n");
    printf ("2: 1.16.4\n");
    printf ("4: 1.16.3\n");
    printf ("5: 1.16.2\n");
    printf ("6: 1.16.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_15() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.15.2\n");
    printf ("2: 1.15.1\n");
    printf ("3: 1.15\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_14() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.14.4\n");
    printf ("2: 1.14.3\n");
    printf ("3: 1.14.2\n");
    printf ("4: 1.14.1\n");
    printf ("5: 1.14\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_13() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.13.2\n");
    printf ("2: 1.13.1\n");
    printf ("3: 1.13\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_12() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.12.2\n");
    printf ("2: 1.12.1\n");
    printf ("3: 1.12\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_11() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.11.2\n");
    printf ("2: 1.11.1\n");
    printf ("3: 1.11\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_10() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.10.2\n");
    printf ("2: 1.10\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_9() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.9.4\n");
    printf ("2: 1.9.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_8() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.8.8\n");
    printf ("2: 1.8.7\n");
    printf ("3: 1.8.6\n");
    printf ("4: 1.8.5\n");
    printf ("5: 1.8.4\n");
    printf ("6: 1.8.3\n");
    printf ("7: 1.8\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_7() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.7.10\n");
    printf ("2: 1.7.9\n");
    printf ("3: 1.7.8\n");
    printf ("4: 1.7.5\n");
    printf ("5: 1.7.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_6() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.6.4\n");
    printf ("2: 1.6.2\n");
    printf ("3: 1.6.1\n");
    Dividing_line();
    return 0;
}
int bukkit_version_selection_1_5() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.5.2\n");
    printf ("2: 1.5.1\n");
    printf ("3: 1.5\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_4() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.5.2\n");
    printf ("2: 1.5.1\n");
    printf ("3: 1.5\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_3() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.3.2\n");
    printf ("2: 1.3.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_2() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.2.5\n");
    printf ("2: 1.2.4\n");
    printf ("3: 1.2.3\n");
    printf ("4: 1.2.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_1() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_selection_1_0() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.0.0\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//spigot版本选择
int spigot_version_selection_1_20() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.20.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_19() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.19.4\n");
    printf ("2: 1.19.3\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.19.1\n");
    printf ("5: 1.19\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_18() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.18.1\n");
    printf ("3: 1.18\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_17() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.17.1\n");
    printf ("2: 1.17\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_16() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.16.5\n");
    printf ("1: 1.16.4\n");
    printf ("1: 1.16.3\n");
    printf ("1: 1.16.2\n");
    printf ("2: 1.16.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_15() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.15.2\n");
    printf ("1: 1.15.1\n");
    printf ("2: 1.15\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_14() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.14.4\n");
    printf ("1: 1.14.3\n");
    printf ("1: 1.14.2\n");
    printf ("1: 1.14.1\n");
    printf ("2: 1.14\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_13() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.13.2\n");
    printf ("2: 1.13.1\n");
    printf ("3: 1.13\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_12() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.12.2\n");
    printf ("2: 1.12.1\n");
    printf ("3: 1.12\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_11() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.11.2\n");
    printf ("2: 1.11.1\n");
    printf ("3: 1.11\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_10() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.10.2\n");
    printf ("2: 1.10\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_9() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.9.4\n");
    printf ("2: 1.9.2\n");
    printf ("3: 1.9\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_8() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.8.8\n");
    printf ("2: 1.8.7\n");
    printf ("3: 1.8.6\n");
    printf ("4: 1.8.5\n");
    printf ("5: 1.8.4\n");
    printf ("6: 1.8.3\n");
    printf ("7: 1.8\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_7() {
    clear();
    printf ("请选择服务器核心版本");
    Dividing_line();
    printf ("1: 1.7.10\n");
    printf ("1: 1.7.9\n");
    printf ("1: 1.7.8\n");
    printf ("1: 1.7.5\n");
    printf ("1: 1.7.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_6() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.6.4\n");
    printf ("2: 1.6.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_5() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.5.2\n");
    printf ("2: 1.5.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_selection_1_4() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.4.7\n");
    printf ("2: 1.4.6\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//paper
int paper_version_selection_1_20() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.20.1\n");
    printf ("2: 1.20\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_19() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.19.4\n");
    printf ("2: 1.19.3\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.19.1\n");
    printf ("5: 1.19\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_18() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.18.1\n");
    printf ("3: 1.18\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_17() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.17.1\n");
    printf ("2: 1.17\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_16() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.16.5\n");
    printf ("1: 1.16.4\n");
    printf ("1: 1.16.3\n");
    printf ("1: 1.16.2\n");
    printf ("2: 1.16.1\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_15() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.15.2\n");
    printf ("1: 1.15.1\n");
    printf ("2: 1.15\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_14() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.14.4\n");
    printf ("1: 1.14.3\n");
    printf ("1: 1.14.2\n");
    printf ("1: 1.14.1\n");
    printf ("2: 1.14\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_13() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.13.2\n");
    printf ("2: 1.13.1\n");
    printf ("3: 1.13\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_12() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.12.2");
    printf ("2: 1.12.1(出现问题官方端无法正常部署，请勿使用);\n");
    printf ("3: 1.12(出现问题官方端无法正常部署，请勿使用);\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_11() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.11.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_10() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.10.2\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_9() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.9.4\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_selection_1_8() {
    clear();
    printf ("请选择服务器核心版本\n");
    Dividing_line();
    printf ("1: 1.8.8\n");
    Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}



































