#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include<map>
#include "speaker.h"
#include<algorithm>
#include<deque>
#include<numeric>
#include<string>
#include<functional>
#include<fstream>

class SpeechManager {
public:

	//构造函数
	SpeechManager();

	//菜单功能
	void show_Menu();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();

	//初始化容器和属性
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//开始比赛 比赛流程控制
	void startSpeech();

	//抽签
	void speechDraw();


	//比赛
	void speechContest();

	//显示比赛得分
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示往届记录
	void showRecord();

	//清空文件
	void clearRecord();

	//文件为空的标志
	bool fileisEmpty;

	//往届记录
	map<int, vector<string>>m_Record;

	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;

	//第一轮晋级选手编号容器
	vector <int>v2;

	//胜出前三名选手编号容器
	vector<int>vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker>m_Speaker;

	//存放比赛轮数
	int m_Index;

};