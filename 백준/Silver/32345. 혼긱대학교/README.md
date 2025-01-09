# [Silver III] 혼긱대학교 - 32345 

[문제 링크](https://www.acmicpc.net/problem/32345) 

### 성능 요약

메모리: 3800 KB, 시간: 24 ms

### 분류

조합론, 수학, 문자열

### 제출 일자

2024년 9월 21일 15:18:07

### 문제 설명

<p>홍익대학교의 영어 이름은 <span style="color:#e74c3c;"><code>hongik university</code></span>이다. 하지만 읽는 사람에 따라 이를 <span style="color:#e74c3c;"><code>hong/ik</code></span>으로 발음하지 않고, <span style="color:#e74c3c;"><code>hon/gik</code></span>으로 발음해 혼긱대학교가 되는 웃지 못할 상황이 종종 벌어지곤 한다. </p>

<p>자음이 앞 모음에 붙느냐, 뒤 모음에 붙느냐에 따라 단어의 발음이 다른 것을 신기하게 여긴 동현이는 비슷한 상황인 영어 단어들을 조사해서 발음이 얼마나 다양하게 될 수 있는지를 알아보려 한다. 하지만, 영어를 잘 못하는 동현이는 아래의 규칙에 따라서만 발음을 파악한다. </p>

<ul>
	<li>영어 모음은 <span style="color:#e74c3c;"><code>a</code></span>, <span style="color:#e74c3c;"><code>e</code></span>, <span style="color:#e74c3c;"><code>i</code></span>, <span style="color:#e74c3c;"><code>o</code></span>, <span style="color:#e74c3c;"><code>u</code></span> 5개이며, 자음은 모음을 제외한 나머지 21개의 알파벳이다.</li>
	<li>1개의 모음에 0개 이상의 자음이 앞뒤로 붙어서 하나의 음이 되고, 음들이 모여서 단어의 발음이 된다. 
	<ul>
		<li>예) <code><span style="color:#e74c3c;">h</span>, <span style="color:#e74c3c;">o</span>, <span style="color:#e74c3c;">n</span>, <span style="color:#e74c3c;">g</span>, <span style="color:#e74c3c;">i</span>, <span style="color:#e74c3c;">k</span> →</code> <code><span style="color:#e74c3c;">hong</span>, <span style="color:#e74c3c;">ik</span></code> <code>→</code> <span style="color:#e74c3c;"><code>hongik</code></span></li>
	</ul>
	</li>
	<li>자음과 자음, 자음과 모음은 인접했을 때만 한 음으로 모일 수 있다.</li>
	<li>음에 구성된 알파벳의 개수, 구성, 순서가 다른 경우 다른 음으로 취급한다.
	<ul>
		<li>예) <span style="color:#e74c3c;"><code>ab</code></span>와 <span style="color:#e74c3c;"><code>abb</code></span>, <span style="color:#e74c3c;"><code>ba</code></span>는 모두 다른 음이다.</li>
	</ul>
	</li>
	<li>주어진 단어의 알파벳을 각각 1회씩 사용해서 발음을 만들어야 한다.</li>
	<li>각 음의 구성이 다른 경우 단어의 발음이 다른 것으로 생각한다.</li>
</ul>

<p>이와 같은 규칙에 따라 단어들이 발음될 수 있는 경우의 수를 출력해 보자.</p>

### 입력 

 <p>첫째 줄에 테스트 케이스의 개수 \(T\)가 주어진다.  \((1 ≤ T ≤ 100\,000)\)</p>

<p>둘째 줄부터 \(T\)개의 줄에 걸쳐, 알파벳 소문자로 이루어진 단어 \(S\)가 주어진다. \((1 ≤ |S| ≤ 300\,000)\)</p>

<p>모든 테스트 케이스에 대해 단어의 길이의 합은 \(1\,000\,000\) 이하이다.</p>

### 출력 

 <p>매 줄마다, 각 테스트 케이스에서 단어의 발음의 경우의 수를 출력한다.</p>

<p>이때 경우의 수가 너무 커질 수 있으므로 \(10^9+7\)로 나눈 나머지를 출력하자.</p>

<p>만약 모음이 없어서 발음 할 수 없을 경우 <span style="color:#e74c3c;"><code>-1</code></span>을 출력한다.</p>

