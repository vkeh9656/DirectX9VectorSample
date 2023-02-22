// DirectX9VectorSample.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <d3dx9math.h>

int main()
{
    //D3DXVECTOR3 v1(0.0f, 3.0f, 0.0f);
    //D3DXVECTOR3 v2(3.0f, 0.0f, 0.0f);
    //D3DXVECTOR3 v3;
    //D3DXVECTOR3 v4(3.0f, 3.0f, 0.0f);
    //float fLength;

    //// 벡터의 합 
    //v3 = v1 + v2;
    //printf("합 : %f %f %f \n", v3.x, v3.y, v3.z);
    //
    //D3DXVec3Add(&v3, &v1, &v2);
    //printf("합 : %f %f %f \n", v3.x, v3.y, v3.z);

    //// 벡터의 뺄셈
    //v3 = v1 - v2;
    //printf("뺄셈 : %f %f %f \n", v3.x, v3.y, v3.z); 

    //D3DXVec3Subtract(&v3, &v1, &v2);
    //printf("뺄셈 : %f %f %f \n", v3.x, v3.y, v3.z);

    //// 벡터의 크기
    //fLength = D3DXVec3Length(&v4);
    //printf("크기 : %f \n", fLength); 

    //// 벡터의 크기 변환
    //float fScale = 2.0f;
    //D3DXVECTOR3 v5(2.0f, 1.0f, 0.0f);

    //D3DXVec3Scale(&v5, &v5, fScale);
    //printf("값과 벡터의 곱 : %f %f %f \n", v5.x, v5.y, v5.z);

    //// 벡터의 단위벡터
    //D3DXVECTOR3 v6(2.0f, 2.0f, 3.0f);
    //D3DXVECTOR3 vResult;
    //float fNormalize;

    //D3DXVec3Normalize(&vResult, &v6);
    //printf("단위벡터 : %f %f %f \n", vResult.x, vResult.y, vResult.z);
    //fNormalize = D3DXVec3Length(&vResult);
    //printf("크기 : %f \n", fNormalize);


    //// 내적을 이용하여 벡터간 사이각을 알아내기
    //D3DXVECTOR3 v7(3.0f, 0.0f, 0.0f);
    //D3DXVECTOR3 v8(-3.0f, 0.0f, 0.0f);
    //float fCos, fDot, fScale;

    //fDot = D3DXVec3Dot(&v7, &v8);
    //fScale = D3DXVec3Length(&v7) * D3DXVec3Length(&v8);
    //fCos = fDot / fScale;
    //printf("라디안 : %f \n", fCos);


    //// 외적을 이용하여 수직 법선 방향벡터 구하기
    //D3DXVECTOR3 v9(3.0f, 0.0f, 0.0f);
    //D3DXVECTOR3 v10(0.0f, 3.0f, 0.0f);
    //D3DXVECTOR3 vResult;

    //D3DXVec3Cross(&vResult, &v9, &v10);
    //D3DXVec3Normalize(&vResult, &vResult);
    //printf("수직 법선 방향벡터 : %f %f %f \n", vResult.x, vResult.y, vResult.z);


    //// Matrix 초기화
    //D3DXMATRIX matIdentity, matMatrix, matResult;
    //D3DXMatrixIdentity(&matIdentity);

    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        matMatrix(i, j) = float(i * 4 + j + 1);
    //    }
    //}

    //// A*E(단위행렬) = A
    //
    //D3DXMatrixMultiply(&matResult, &matMatrix, &matIdentity);
    //
    //// 아래 코드는 위랑 결과 같음.
    ////matResult = matMatrix * matIdentity;

    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matResult.m[i][j]);
    //    }

    //    printf("\n");
    //}


    //// 전치행렬
    //D3DXMATRIX matMatrix, matResult;

    //printf("전치행렬 이전\n");
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        matMatrix(i, j) = float(i * 4 + j + 1);
    //    }
    //}
    //
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matMatrix(i,j));
    //    }
    //    printf("\n");
    //}

    //printf("---------------------------------\n");
    //printf("전치행렬 이후\n");
    //D3DXMatrixTranspose(&matResult, &matMatrix);
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matResult(i,j));
    //    }

    //    printf("\n");
    //}

    
    
    //// 역행렬
    //D3DXMATRIX matMatrix, matResult;
    //D3DXMatrixRotationX(&matMatrix, 0.3f);      // x축을 기준으로 회전하는 행렬
    //
    //printf("----------------------회전 행렬----------------------\n");
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matMatrix(i, j));
    //    }
    //    printf("\n");
    //}
    //
    //printf("----------------------역행렬----------------------\n");
    //D3DXMatrixInverse(&matResult, NULL, &matMatrix);
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matResult(i, j));
    //    }
    //    printf("\n");
    //}
    //
    //printf("----------------------다시 역행렬----------------------\n");
    //D3DXMatrixInverse(&matResult, NULL, &matMatrix);
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matResult(i, j));
    //    }
    //    printf("\n");
    //}




    //// 이동행렬
    //D3DXMATRIX matMatrix;
    //printf("----------------------이동 행렬----------------------\n");
    //D3DXMatrixTranslation(&matMatrix, 0.5f, 0.5f, 0.5f);
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matMatrix(i, j));
    //    }

    //    printf("\n");
    //}



    //// 크기행렬
    //D3DXMATRIX matMatrix;
    //printf("----------------------크기 행렬----------------------\n");
    //D3DXMatrixScaling(&matMatrix, 0.5f, 0.5f, 0.5f);
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matMatrix(i, j));
    //    }

    //    printf("\n");
    //}

    //// X축 회전 행렬
    //D3DXMATRIX matMatrix;
    //printf("----------------------X축 회전 행렬----------------------\n");
    //D3DXMatrixRotationX(&matMatrix, D3DXToRadian(30));  // 30도 만큼을 Radian 값으로 치환해서 회전
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matMatrix(i, j));
    //    }

    //    printf("\n");
    //}


    //// Y축 회전 행렬
    //D3DXMATRIX matMatrix;
    //printf("----------------------Y축 회전 행렬----------------------\n");
    //D3DXMatrixRotationY(&matMatrix, D3DXToRadian(30));  // 30도 만큼을 Radian 값으로 치환해서 회전
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matMatrix(i, j));
    //    }

    //    printf("\n");
    //}

    //// Z축 회전 행렬
    //D3DXMATRIX matMatrix;
    //printf("----------------------Z축 회전 행렬----------------------\n");
    //D3DXMatrixRotationZ(&matMatrix, D3DXToRadian(30));  // 30도 만큼을 Radian 값으로 치환해서 회전
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%7.1f", matMatrix(i, j));
    //    }

    //    printf("\n");
    //}

    return 0;
}