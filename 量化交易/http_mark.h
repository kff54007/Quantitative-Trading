#pragma once
#define HTTP_SUCCESS       (0)          // �����ɹ�
#define HTTP_ERROR_UNKNOWN      (-1)         // δ֪�Ĵ���
#define HTTP_ERROR_NETWORK      (-2)         // ��������ʧ��
#define HTTP_ERROR_HTTP_HEAD    (-3)         // δ�ҵ�Э��ͷ http || https 

#define HTTP_ERROR_SERVICE      (-1000)      // ����������ʧ��
#define HTTP_ERROR_LOGIN        (-1001)      // ��¼ʧ��
#define HTTP_ERROR_ID           (-1002)      // ��ҵID����
#define HTTP_ERROR_USER         (-1003)      // �ʺŲ�����
#define HTTP_ERROR_PASSWORD     (-1004)      // �������

#define HTTP_ERROR_PARAMETER    (1)          // ��������
#define HTTP_ERROR_PHONE        (2)          // �绰�������
#define HTTP_ERROR_MESSAGE      (3)          // �����������ֶ�
#define HTTP_ERROR_FUNCTION     (4)          // ��ǰƽ̨��֧���������