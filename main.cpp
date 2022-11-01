#include <bits/stdc++.h>
#include "FileCompressHuffman.cpp"
#include "Huffman.hpp"
#include "FileCompressHuffman.h"
using namespace std;

int main()
{
	FileCompressHuffman fH;
	string File = "1.txt";
	//fH.CompressFile(File);

	File = "1.Hzip";
	fH.UnCompressFile(File);
	system("pause");
	return 0;
}