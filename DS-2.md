배열
1) 배열의 특징
- 배열의 이름은 배열 첫 번째 요소의 주소
- 같은 자료형들을 연속된 공간에 저장하는 가장 간단한 형태의 선형구조
- 여러 개의 변수를 사용하지 않고 하나의 이름과 참조 번호를 사용해 데이터를 저장하는 방법
- 배열에서 각 자료는 연속적인 메모리 공간에 저장되며, 논리적인 구조와 실제로 하드디스크에 저장되는 물리적 위치가 동일함
- 배열을 사용하여 우너하는 자료를 쉽게 찾아낼 수 있고, 많은 양의 자료를 하나의 이름으로 저장함으로써 공간을 관리하고 사용할 수 있음
- 원소 삽입, 삭제시 시간이 많이 걸림

2) 배열의 활용
- 배열에서 개별적인 요소들의 위치는 첨자를 이용하여 지정한다.
- 배열의 원소 참조 : 변수명 뒤에 대괄호 []를 붙이고, 그 안에 사용할 개수를 지정한다.
- 배열은 인덱스 범위를 벗어나면, Run-Time Error 발생할 수 있음.
- C 언어에서 배열의 위치는 0부터 시작된다.
- 배열은 행 우선으로 데이터 기억장소에 할당됨.
- 배열 이름만 사용하면 배열의 첫 번째 요소의 주소를 지정하는 것과 같다.
- 배열 요소의 개수 구하기 : sizeof(배열명) / sizeof(배열자료형)