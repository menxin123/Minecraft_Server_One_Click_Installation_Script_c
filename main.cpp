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
    for (int i = 0; i < 20; i++) {
        std::cout << "=";
    }
    std::cout << std::endl;
    return 0;
}

//菜单选择部分
//核心选择部分
int main_menu() {
    printf ("请选择服务器核心\n");
    int up = Dividing_line();
    printf ("1: forge\n");
    printf ("2: fabric\n");
    printf ("3: cat_server\n");
    printf ("4: mo_server\n");
    printf ("5: bukkit\n");
    printf ("6: spigot\n");
    printf ("7: Paper\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//forge版本范围选择菜单
int forge_version_range_selection() {
    int removals = clear();
    printf ("___请选择版本范围___\n");
    int up = Dividing_line();
    printf ("1: 1.17系列-1.20系列\n");
    printf ("2: 1.8系列-1.16系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//fabric版本范围选择菜单
int fabric_version_range_selection() {
    int removals = clear();
    printf ("___请选择版本范围___\n");
    int up = Dividing_line();
    printf ("1: 1.14系列-1.20系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//cat_server版本范围选择菜单
int cat_server_version_selection() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.16.5\n");
    printf ("3: 1.12.2\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//mo_server版本范围选择菜单
int mo_server_version_selection() {
    int removals = clear();
    printf ("请选择服务器核心版本");
    int up = Dividing_line();
    printf ("1: 1.20.1\n");
    printf ("2: 1.19.4\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.18.2\n");
    printf ("5: 1.16.5\n");
    printf ("6: 1.12.2\n");
    printf ("7: 1.7.10\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//bukkit_server版本范围选择菜单
int bukkit_server_version_selection() {
    int removals = clear();
    printf ("   请选择版本范围   \n");
    int up = Dividing_line();
    printf ("1: 1.18系列-1.20系列\n");
    printf ("2: 1.9系列-1.17系列\n");
    printf ("3: 1.0系列-1.8系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//spigot_server版本范围选择菜单
int spigot_server_version_selection() {
    int removals = clear();
    printf ("   请选择版本范围   \n");
    int up = Dividing_line();
    printf ("1: 1.13系列-1.20系列\n");
    printf ("2: 1.4系列-1.12系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//paper_server版本范围选择菜单
int paper_server_version_selection() {
    int removals = clear();
    printf ("   请选择版本范围   \n");
    int up = Dividing_line();
    printf ("1: 1.17系列-1.20系列\n");
    printf ("2: 1.8系列-1.16系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//二级菜单版本系列选择部分

//forge版本系列选择
int forge_version_series_I() {
    int removals = clear();
    printf ("1.17系列---1.20系列\n");
    int up = Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    printf ("5: 1.16系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

int forge_version_series_II() {
    int removals = clear();
    printf ("1.8系列---1.16系列\n");
    int up = Dividing_line();
    printf ("1: 1.16系列\n");
    printf ("2: 1.15系列\n");
    printf ("3: 1.14系列\n");
    printf ("4: 1.13系列\n");
    printf ("5: 1.12系列\n");
    printf ("6: 1.11系列\n");
    printf ("7: 1.10系列\n");
    printf ("8: 1.9系列\n");
    printf ("9: 1.8系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//fabric版本系列选择
int fabric_version_series_I() {
    int removals = clear();
    printf ("1.14系列---1.20系列\n");
    int up = Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    printf ("5: 1.16系列\n");
    printf ("6: 1.15系列\n");
    printf ("7: 1.14系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//bukkit版本系列选择
int bukkit_version_series_I() {
    int removals = clear();
    printf ("1.18系列---1.20系列\n");
    int up = Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_series_II() {
    int removals = clear();
    printf ("1.9系列---1.17系列\n");
    int up = Dividing_line();
    printf ("1: 1.17系列\n");
    printf ("2: 1.16系列\n");
    printf ("3: 1.15系列\n");
    printf ("4: 1.14系列\n");
    printf ("5: 1.13系列\n");
    printf ("6: 1.12系列\n");
    printf ("7: 1.11系列\n");
    printf ("8: 1.10系列\n");
    printf ("9: 1.9系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int bukkit_version_series_III() {
    int removals = clear();
    printf ("1.0系列-1.8系列\n");
    int up = Dividing_line();
    printf ("1: 1.8系列\n");
    printf ("2: 1.7系列\n");
    printf ("3: 1.6系列\n");
    printf ("4: 1.5系列\n");
    printf ("5: 1.4系列\n");
    printf ("6: 1.3系列\n");
    printf ("7: 1.2系列\n");
    printf ("8: 1.1系列\n");
    printf ("9: 1.0系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//spigot版本系列选择
int spigot_version_series_I() {
    int removals = clear();
    printf ("1.13系列---1.20系列\n");
    int up = Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    printf ("5: 1.16系列\n");
    printf ("6: 1.15系列\n");
    printf ("7: 1.14系列\n");
    printf ("8: 1.13系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int spigot_version_series_II() {
    int removals = clear();
    printf ("1.4系列-1.12系列\n");
    int up = Dividing_line();
    printf ("1: 1.12系列\n");
    printf ("2: 1.11系列\n");
    printf ("3: 1.10系列\n");
    printf ("4: 1.9系列\n");
    printf ("5: 1.8系列\n");
    printf ("6: 1.7系列\n");
    printf ("7: 1.6系列\n");
    printf ("8: 1.5系列\n");
    printf ("9: 1.4系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
//paper版本系列选择
int paper_version_series_I() {
    int removals = clear();
    printf ("1.17系列---1.20系列\n");
    int up = Dividing_line();
    printf ("1: 1.20系列\n");
    printf ("2: 1.19系列\n");
    printf ("3: 1.18系列\n");
    printf ("4: 1.17系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int paper_version_series_II() {
    int removals = clear();
    printf ("1.8系列-1.16系列\n");
    int up = Dividing_line();
    printf ("1: 1.16系列\n");
    printf ("2: 1.15系列\n");
    printf ("3: 1.14系列\n");
    printf ("4: 1.13系列\n");
    printf ("5: 1.12系列\n");
    printf ("6: 1.11系列\n");
    printf ("7: 1.10系列\n");
    printf ("8: 1.9系列\n");
    printf ("9: 1.8系列\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}


//三级菜单版本选择部分

//三级菜单下载部分

//forge版本选择
int forge_version_selection_1_20() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.20.1\n");
    printf ("2: 1.20\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续");
    return 0;
}
int forge_version_selection_1_19() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.19.4\n");
    printf ("2: 1.19.3\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.19.1\n");
    printf ("5: 1.19\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_18() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.18.1\n");
    printf ("3: 1.18\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_17() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.17.1\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_16() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.16.5\n");
    printf ("2: 1.16.4\n");
    printf ("3: 1.16.3\n");
    printf ("4: 1.16.2\n");
    printf ("5: 1.16.1\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_15() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.15.2\n");
    printf ("2: 1.15.1\n");
    printf ("3: 1.15\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_14() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.14.4\n");
    printf ("2: 1.14.3\n");
    printf ("3: 1.14.2\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_13() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.13.2\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_12() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.12.2\n");
    printf ("2: 1.12.1\n");
    printf ("3: 1.12\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_11() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.11.2\n");
    printf ("2: 1.11\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_10() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.10.2\n");
    printf ("2: 1.10\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_9() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.9.4\n");
    printf ("2: 1.9\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int forge_version_selection_1_8() {
    int removals = clear();
    printf ("按下对应数字按键以继续,输入t退出\n");
    int up = Dividing_line();
    printf ("1: 1.8.9\n");
    printf ("2: 1.8.8\n");
    printf ("3: 1.8\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//fabric版本选择
int fabric_version_selection_1_20() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.20.1\n");
    printf ("2: 1.20\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_19() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.19.4\n");
    printf ("2: 1.19.3\n");
    printf ("3: 1.19.2\n");
    printf ("4: 1.19.1\n");
    printf ("5: 1.19\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_18() {
    int removals = clear();
    printf ("按下对应数字按键以继续,输入t退出\n");
    int up = Dividing_line();
    printf ("1: 1.18.2\n");
    printf ("2: 1.18.1\n");
    printf ("3: 1.18\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_17() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.17.1\n");
    printf ("2: 1.17\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_16() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.16.5\n");
    printf ("2: 1.16.4\n");
    printf ("3: 1.16.3\n");
    printf ("4: 1.16.2\n");
    printf ("5: 1.16.1\n");
    printf ("6: 1.16\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续");
    return 0;
}
int fabric_version_selection_1_15() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.15.2\n");
    printf ("2: 1.15.1\n");
    printf ("3: 1.15\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}
int fabric_version_selection_1_14() {
    int removals = clear();
    printf ("请选择服务器核心版本\n");
    int up = Dividing_line();
    printf ("1: 1.14.4\n");
    printf ("2: 1.14.3\n");
    printf ("3: 1.14.2\n");
    printf ("4: 1.14.1\n");
    printf ("5: 1.14\n");
    int down = Dividing_line();
    printf ("按下对应数字按键以继续,输入t退出");
    return 0;
}

//bukkit版本选择
int bukkit_version_selection_1_20() {

    return 0;
}
int bukkit_version_selection_1_19() {

    return 0;
}
int bukkit_version_selection_1_18() {

    return 0;
}
int bukkit_version_selection_1_17() {

    return 0;
}
int bukkit_version_selection_1_16() {

    return 0;
}
int bukkit_version_selection_1_15() {

    return 0;
}
int bukkit_version_selection_1_14() {

    return 0;
}
int bukkit_version_selection_1_13() {

    return 0;
}
int bukkit_version_selection_1_12() {

    return 0;
}
int bukkit_version_selection_1_11() {

    return 0;
}
int bukkit_version_selection_1_10() {

    return 0;
}
int bukkit_version_selection_1_9() {

    return 0;
}
int bukkit_version_selection_1_8() {

    return 0;
}
int bukkit_version_selection_1_7() {

    return 0;
}
int bukkit_version_selection_1_6() {

    return 0;
}

int bukkit_version_selection_1_5() {

    return 0;
}
int bukkit_version_selection_1_4() {

    return 0;
}
int bukkit_version_selection_1_3() {

    return 0;
}
int bukkit_version_selection_1_2() {

    return 0;
}
int bukkit_version_selection_1_1() {

    return 0;
}
int bukkit_version_selection_1_0() {

    return 0;
}

//spigot版本选择
int spigot_version_selection_1_20() {

    return 0;
}
int spigot_version_selection_1_19() {

    return 0;
}
int spigot_version_selection_1_18() {

    return 0;
}
int spigot_version_selection_1_17() {

    return 0;
}
int spigot_version_selection_1_16() {

    return 0;
}
int spigot_version_selection_1_15() {

    return 0;
}
int spigot_version_selection_1_14() {

    return 0;
}
int spigot_version_selection_1_13() {

    return 0;
}
int spigot_version_selection_1_12() {

    return 0;
}
int spigot_version_selection_1_11() {

    return 0;
}
int spigot_version_selection_1_10() {

    return 0;
}
int spigot_version_selection_1_9() {

    return 0;
}
int spigot_version_selection_1_8() {

    return 0;
}
int spigot_version_selection_1_7() {

    return 0;
}
int spigot_version_selection_1_6() {

    return 0;
}
int spigot_version_selection_1_5() {

    return 0;
}
int spigot_version_selection_1_4() {

    return 0;
}

//paper
int paper_version_selection_1_20() {

    return 0;
}
int paper_version_selection_1_19() {

    return 0;
}
int paper_version_selection_1_18() {

    return 0;
}
int paper_version_selection_1_17() {

    return 0;
}
int paper_version_selection_1_16() {

    return 0;
}
int paper_version_selection_1_15() {

    return 0;
}
int paper_version_selection_1_14() {

    return 0;
}
int paper_version_selection_1_13() {

    return 0;
}
int paper_version_selection_1_12() {

    return 0;
}
int paper_version_selection_1_11() {

    return 0;
}
int paper_version_selection_1_10() {

    return 0;
}
int paper_version_selection_1_9() {

    return 0;
}
int paper_version_selection_1_8() {

    return 0;
}









