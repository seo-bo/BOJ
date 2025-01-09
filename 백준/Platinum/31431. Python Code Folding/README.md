# [Platinum II] Python Code Folding - 31431 

[문제 링크](https://www.acmicpc.net/problem/31431) 

### 성능 요약

메모리: 56584 KB, 시간: 460 ms

### 분류

자료 구조, 오일러 경로 테크닉, 세그먼트 트리, 스택, 트리

### 제출 일자

2024년 7월 30일 03:20:17

### 문제 설명

<p>Python은 간결하고 가독성이 높은 문법으로 알려진 고급 프로그래밍 언어로, 다양한 분야에서 사용되며 커뮤니티와 생태계가 풍부한 언어로 알려져 있다. Python은 데이터 분석, 인공지능, 웹 개발 등 다양한 영역에서 널리 활용되고 있다.</p>

<p>Python 코드는 아래의 요소로 이루어져 있다.</p>

<ul>
	<li><strong>라인 (Line)</strong>은 Python 코드의 한 행을 나타낸다. 이 문제에서, 각 라인은 ‘헤더’ 또는 ‘심플문’ 중 하나이다.</li>
	<li><strong>블록 (Block)</strong>은 반복문과 조건문 등을 구성한다. 여러 개의 라인으로 구성되어 있으며, 헤더와 바디로 구분된다.</li>
	<li>블록의 구분을 위해 각 라인 앞에 $0$개 이상의 탭 문자를 삽입하며, 이 탭 문자를 <strong>인덴트 (Indent)</strong>라고 부른다. 라인 앞의 탭 문자 개수를 <strong>인덴트 레벨</strong> <strong>(Indent Level)</strong>이라고 부른다. 본 문제의 모든 예시에서는 모든 탭 문자를 공백 문자 $4$개로 표기한다.</li>
	<li><strong>헤더 (Header)</strong>는 블록을 시작하는 부분으로, 정확히 한 라인으로 구성된다.</li>
	<li><strong>심플문 (Simple Statement)</strong>은 라인 중 헤더에 해당하지 않는 것을 의미한다.</li>
	<li><strong>바디 (Body)</strong>는 블록의 안쪽 영역에 해당하는 부분으로, <strong>$1$개 이상의 라인</strong>으로 구성된다.</li>
</ul>

<p>올바른 Python 코드는 아래의 조건 중 적어도 하나를 만족한다.</p>

<ul>
	<li>인덴트 레벨이 $0$인 심플문으로만 이루어진 코드이다.</li>
	<li>인덴트 레벨이 $0$인 헤더로 시작하며, 헤더 이하에 $1$라인 이상의 코드가 있다. 헤더를 제거하고 남은 부분의 인덴트 레벨을 모두 $1$씩 감소시키면 올바른 Python 코드가 된다. <strong>이때 이 코드는 블록이 되며, 헤더를 제외한 부분의 코드는 모두 블록의 바디가 된다.</strong></li>
	<li>올바른 Python 코드 두 개를 이어 붙인 코드이다.</li>
</ul>

<p>아래는 올바르지 않은 Python 코드의 예시와, 각각이 조건을 만족하지 않는 이유이다.</p>

<table align="center" border="1" cellpadding="0" cellspacing="0" class="table table-bordered" style="width: 100%;">
	<tbody>
		<tr>
			<td style="text-align: justify; width: 20%; min-width: 250px;">
			<pre style="text-align: left;"><code>a=1
    b=3
c=5</code></pre>
			</td>
			<td>심플문으로만 구성된 코드이지만, 인덴트 레벨이 모두 $0$이 아니다.</td>
		</tr>
		<tr>
			<td style="text-align: justify; width: 20% min-width: 250px;">
			<pre style="text-align: left;"><code>for i in range(n):
for x in a:
    print(s)</code>
</pre>
			</td>
			<td>첫 번째 블록의 바디가 $1$라인 이상의 코드를 포함하지 않는다.</td>
		</tr>
		<tr>
			<td style="text-align: justify; width: 20%; min-width: 250px;">
			<pre style="text-align: left;"><code>for i in range(n):
        for j in range(n):
            print(i+j)</code></pre>
			</td>
			<td>첫 번째 라인에 헤더가 존재하지만, 헤더를 제거한 후 남은 부분의 인덴트 레벨을 모두 $1$씩 감소시켜도 올바른 코드가 되지 않는다.</td>
		</tr>
	</tbody>
</table>

<p>다음은 사용자로부터 정수 $n$을 입력받아 문자 <code>'*'</code>로 구성된 직각삼각형을 출력하는 올바른 Python 코드의 예시이다.</p>

<table align="center" border="0" cellpadding="0" cellspacing="0" class="table table-bordered" style="width: 350px;">
	<tbody>
		<tr>
			<td style="border-color: rgba(0, 0, 0, 0);">
			<pre><code>1| n = int(input())
2| a = []
3| for i in range(1, n+1):
4|     s = ""
5|     for j in range(i):
6|         s += "*"
7|     a.append(s)
8| for s in a:
9|     print(s)</code>
</pre>
			</td>
		</tr>
	</tbody>
</table>

<p>오늘날 많은 코드 에디터들은 Code Folding 기능을 제공한다. Code Folding이란 특정한 블록에서 바디에 해당하는 부분을 숨겨 헤더만 보이게 하는 기능으로, 긴 코드를 읽기 편리하게 해준다. 엄밀히 말해, Code Folding 기능은 다음과 같이 정의된다.</p>

<p>초기에 모든 블록은 펴진 상태이다. 코드에 어떤 블록이 있을 때, Code Folding 기능을 사용해 그 블록을 접거나 펼 수 있다. 블록을 접을 때, 블록의 바디에 해당하는 라인은 모두 보이지 않게 된다. 또한, 그 블록을 포함하는 다른 어떤 블록을 접더라도, 그 블록의 접힌 상태는 유지된다.</p>

<p>예를 들어, 위에서 제시된 코드의 두 번째 블록을 접으면 다음과 같이 보인다. 블록의 바디에 해당하는 $6$번 라인이 보이지 않는 것을 확인할 수 있다.</p>

<table align="center" border="0" cellpadding="0" cellspacing="0" class="table table-bordered" style="width: 350px;">
	<tbody>
		<tr>
			<td style="border-color: rgba(0, 0, 0, 0);">
			<pre><code>1| n = int(input())
2| a = []
3| for i in range(1, n+1):
4|     s = ""
5|     for j in range(i): <u>...</u>
7|     a.append(s)
8| for s in a:
9|     print(s)</code>
</pre>
			</td>
		</tr>
	</tbody>
</table>

<p>이어서, 코드의 첫 번째 블록을 접으면 다음과 같이 보인다. 블록의 바디에 해당하는 $4$, $5$, $6$, $7$번 라인이 모두 보이지 않는 것을 확인할 수 있다.</p>

<table align="center" border="0" cellpadding="0" cellspacing="0" class="table table-bordered" style="width: 350px;">
	<tbody>
		<tr>
			<td style="border-color: rgba(0, 0, 0, 0);">
			<pre><code>1| n = int(input())
2| a = []
3| for i in range(1, n+1): <u>...</u>
8| for s in a:
9|     print(s)</code>
</pre>
			</td>
		</tr>
	</tbody>
</table>

<p>이때, 다시 첫 번째 블록을 펴더라도 하위 블록의 접힌 상태는 그대로 유지된다. 즉, 마지막 예시에서 접었던 블록을 다시 펼치더라도 그 전 예시와 동일하게 두 번째 블록의 접힌 상태가 유지되며, $6$번 라인은 여전히 보이지 않는다.</p>

<p>올바른 Python 코드가 주어졌을 때, Code Folding 기능을 수행하고 실시간으로 보이는 코드의 라인 개수를 출력하는 프로그램을 작성해 보자.</p>

### 입력 

 <p>첫 번째 줄에 코드의 라인 수 $N$ 과 쿼리의 개수 $Q$ 가 주어진다. $(2 \leq N \leq 500 \, 000;$ $1 \leq Q \leq 500 \, 000)$</p>

<p>두 번째 줄부터 $N$개의 줄에 걸쳐 전체 코드에 대한 정보가 주어진다. 그중 $i$번째 줄에는 정수 $L_i$와 알파벳 소문자 $T_i$ 가 주어진다. $i$번째 라인의 인덴트 레벨은 $L_i$이고, $T_i$가 <code><span style="color:#e74c3c;">h</span></code>라면 헤더, <code><span style="color:#e74c3c;">s</span></code>라면 심플문이다. $(1 \leq L_i \leq N)$</p>

<p>$N+2$번째 줄부터 한 줄에 하나씩 총 $Q$개의 쿼리가 주어진다.</p>

<ul>
	<li><code><span style="color:#e74c3c;">t</span></code> $x$ — <strong>접히지 않은 전체 코드</strong>에서 $x$번째 블록이 펴져 있으면 접고, 접혀 있으면 편다. 상위 블록이 접혀있어 $x$번째 블록이 보이지 않는 경우는 주어지지 않는다. $(1 \leq x \leq $ 헤더 라인의 총 개수$)$</li>
	<li><code><span style="color:#e74c3c;">p</span></code> — 현재 보이는 코드의 라인 개수를 출력한다. 이 쿼리는 적어도 하나 이상 주어진다.</li>
</ul>

<p>주어진 코드는 올바른 Python 코드의 조건을 만족함이 보장된다.</p>

### 출력 

 <p>주어진 쿼리를 순서대로 실행하였을 때, 각 <code><span style="color:#e74c3c;">p</span></code> 쿼리가 주어질 때마다 해당 시점에 보이는 라인 개수를 출력한다.</p>

