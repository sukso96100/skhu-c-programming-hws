/*  이름 : 한영빈  학과 : 소프트웨어공학과  학번 : 201632034  제목 : 성적 및 성적 평균 출력  작성일 : 2016.10.12*/#include<stdio.h>void showScores(double scores[3]); // 한 학생의 점수를 출력하는 함수 선언void showAverageForStudent(double scores[3]); // 한 학생의 점수 평균을 출력하는 함수 선언int main(void){  // 5명의 국어, 영어, 수학 성적을 보관하는 2차원 배열 초기화  double scores[5][3] = {{70.4, 85.2, 98.1}, {73.5, 80.2, 72.3}, {90.2, 70.1, 85.6},                    {96.2, 75.1, 86.6}, {93.2, 79.1, 82.6}};  int i; // 반복문에 사용할 변수  // 반복문을 이용하여 각 학생의 성적 출력  for(i = 0; i < 5; i++){    printf("학생 %d 의 성적\n", i);    showScores(scores[i]);  }  // 반복문을 이용하여 각 학생의 성적 평균 출력  for(i = 0; i < 5; i++){    printf("학생 %d 의 성적 평균\n", i);    showAverageForStudent(scores[i]);  }  // 끝  return 0;}// 각 학생의 점수를 출력하는 함수void showScores(double scores[3]){  // 점수 출력  printf("국어 : %.2f, 영어 : %.2f, 수학 : %.2f\n", scores[0], scores[1], scores[2]);}// 각 학생의 점수 평균을 출력하는 함수void showAverageForStudent(double scores[3]){  double sum = 0; // 점수 합을 저장할 변수  int i; // 반복문에 사용할 변수  // 점수 합 계산  for (i = 0; i < 3; i++){    sum += scores[i];  }  // 합을 3으로 나눠 평균을 구하여 출력  printf("성적 평균 : %.2f\n", sum / 3);}