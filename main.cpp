#include "bookGroup.h"

int main()
{
    using namespace jingahyun2693303
// 3-2-1. book형 객체3개를 선언하고 원하는 값으로 초기화합니다.
    book b1{"title1",1,10000}, b2{title2,2,20000}, b3{title3,3,30000};
// 3-2-2. bookGroup형을 가리키는 포인터변수를 선언하고 원하는 값으로 초기화하여 동적으로 할당합니다.
    bookBroup* bgPtr{ new bookGroup{"book group name"} };

// 3-2-3. bookGroup형을 가리키는 포인터변수에서 addBook멤버함수를 호출하는데 인자를 3-2-1에서 선언한 객체를 넣습니다. 즉, addBook멤버함수를 3번 호출합니다.
    bgPtr->addBook(b1);
    bPPtr->addBook(b2);
    bgPtr->addBook(b3);

// 3-2-4. bookGroup형을 가리키는 포인터변수에서 print멤버함수를 호출합니다. 
    bgPtr->print()

// 3-2-5. bookGroup형을 가리키는 포인터변수에서 동적으로 할당한 메모리를 해제합니다.
    delete bgPtr;

    return 0;
}

  
// 1. book.h파일에 book class를 인라인으로 구현하려고 합니다. 다음을 확인하여 위 코드를 변경하여 book.h파일을 완성해보세요. 
// 1-1. 헤더가드, 전처리지시자를 넣으세요.
// 1-2. 본인이름학번의 네임스페이스안에 book class를 정의하세요.
// 1-3. testID와 testPrice 함수에서 잘못된 부분이 있으면 수정해보세요. 
// 1-4. 전위증가연산자, 후위증가연산자를 this를 이용해서 구현하세요. 리턴형식도 참조가 필요하면 참조로 리턴하게 변경하세요. 
// 1-5. 복합할당연산자 +=를 구현하세요. 매개변수는 int, price에 매개변수를 더해줍니다. this를 이용하세요.  

// 2. bookGroup.h파일에 bookGroup class를 인라인으로 구현하려고 합니다. 다음을 확인하여 bookGroup.h파일을 완성해보세요.  
// 2-1. 헤더가드, 전처리지시자를 넣으세요.
// 2-2. 상수 max(maxBook)를 100으로 선언합니다. 
// 2-3. 본인이름학번의 네임스페이스안에 bookGroup class를 정의하세요.
// 2-4. 멤버변수는 3개: std::string형의 groupName, book형의 max개의 std::array형 bookList, int형의 n(numOfBook)
// 2-5. 생성자: 매개변수 1개, groupName 초기화, n(numOfBook)은 0으로 초기화
// 2-6. addBook멤버함수(매개변수는 const book&형): n(numOfBook)이 max(maxBook)보다 크거나 같으면 프로그램종료, bookList의 n(numOfBook)인덱스변수에 매개변수 할당, n(numOfBook)값은 +1
// 2-7. print멤버함수: 표준스트림으로 groupName과 bookList를 출력, 이때 bookList는 book형 n(numOfBook)개 출력해야 합니다.
// 2-8. getGroupName, setGroupName 함수를 참조를 이용하여 정의하세요.  
// 2-9. const 멤버함수가 필요한 경우 const 멤버함수로 정의하세요. 

// 3. main.cpp파일에 테스트 코드를 작성합니다. 다음을 확인하여 테스트 코드를 완성해보세요. 
// 3-1. 전처리지시자를 넣으세요. 
// 3-2. main을 작성합니다. 
// 3-2-1. book형 객체3개를 선언하고 원하는 값으로 초기화합니다. 
// 3-2-2. bookGroup형을 가리키는 포인터변수를 선언하고 원하는 값으로 초기화하여 동적으로 할당합니다.  
// 3-2-3. bookGroup형을 가리키는 포인터변수에서 addBook멤버함수를 호출하는데 인자를 3-2-1에서 선언한 객체를 넣습니다. 즉, addBook멤버함수를 3번 호출합니다. 
// 3-2-4. bookGroup형을 가리키는 포인터변수에서 print멤버함수를 호출합니다. 
// 3-2-5. bookGroup형을 가리키는 포인터변수에서 동적으로 할당한 메모리를 해제합니다. 
