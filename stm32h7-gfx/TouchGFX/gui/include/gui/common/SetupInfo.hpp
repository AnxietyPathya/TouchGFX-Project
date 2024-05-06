#ifndef SETUP_INFO
#define SETUP_INFO

#define ADMIN_PASSWORD                                4578
#define FACTORY_PASSWORD                              2056 // 4x5 , 7x8

#define OK_BTN                                        10
#define DEL_BTN                                       11
#define EXIT_BTN                                      12

#define MAX_ID_INDEX                                  19 // 내부적으로는 0~49
#define MIN_ID_INDEX                                  0

#define MAX_GAIN_VALUE                                100
#define MIN_GAIN_VALUE                                0

#define MAX_PHASE_VALUE                               1800
#define MIN_PHASE_VALUE                               0

#define MAX_RUN_TIME                                  99
#define MIN_RUN_TIME                                  3

#define MAX_DELAY_TIME                                99
#define MIN_DELAY_TIME                                1

#define MAX_OFFSET                                    100
#define MIN_OFFSET                                    0

#define MAX_VOLTAGE                                   255
#define MIN_VOLTAGE                                   0

#define MAX_DETECTED_COUNT                            9999
#define MIN_DETECTED_COUNT                            0


#define MAX_TIME_SETUP_YEAR                           99
#define MIN_TIME_SETUP_YEAR                           0

#define MAX_TIME_SETUP_MONTH                          12
#define MIN_TIME_SETUP_MONTH                          1

#define MAX_TIME_SETUP_DATE                          31 // 30,28 은 return 되었을 때, presenter 에서 처리
#define MIN_TIME_SETUP_DATE                           1

// no am/pm
#define MAX_TIME_SETUP_HOUR                           23 // am/pm 인 경우와 24시간인 경우는 presenter 와 view 에서 처리
#define MIN_TIME_SETUP_HOUR                           0

#define MAX_TIME_SETUP_MIN                            59
#define MIN_TIME_SETUP_MIN                            0

#define MAX_TIME_SETUP_SEC                            59
#define MIN_TIME_SETUP_SEC                            0

#define ID_INDEX_LENGTH                               2 // 자릿수
#define PASSWORD_LENGTH                               4
#define GAIN_VALUE_LENGTH                             4 // 자릿수
#define PHASE_VALUE_LENGTH                            4
#define DELAY_TIME_LENGTH                             2
#define RUN_TIME_LENGTH                               2

//#define LOG_DEBUG

typedef enum
{
    KEYPAD_ID = 0,
    KEYPAD_PASSWORD,
    KEYPAD_GAIN,
    KEYPAD_PHASE,
    KEYPAD_DELAY_TIME,
    KEYPAD_RUNTIME,
    KEYPAD_OFFSET,
    KEYPAD_VOLT,
    KEYPAD_TIME_SETUP_YEAR,
    KEYPAD_TIME_SETUP_MONTH,
    KEYPAD_TIME_SETUP_DATE,
    KEYPAD_TIME_SETUP_HOUR,
    KEYPAD_TIME_SETUP_MIN,
    KEYPAD_TIME_SETUP_SEC,
    KEYPAD_UNSELECTED
} KeypadMode_t;


/**
 * @brief
 * dmap(value, in_min, in_max, out_min, out_max) ((in_max - value) * (out_max - out_min) / (in_max - in_min) + out_min) - CONTAINER_OFFSET
 *
 * (in_max - value) :  입력 값이 입력 범위의 최대 값으로부터 어디에 위치하는지 상대적인 위치를 표현
 * (out_max - out_min) / (in_max - in_min) : 입력 범위와 출력 범위의 비율
 * + out_min : 상대적인 위치 * 입출력 범위 비율을 구하고 출력 범위의 최소 값으로 설정
 */
#define dmap(value, in_min, in_max, out_min, out_max) ((in_max - value) * (out_max - out_min) / (in_max - in_min) + out_min) - CONTAINER_OFFSET


#endif
