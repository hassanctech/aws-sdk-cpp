/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/endpoint/AWSPartitions.h>
#include <aws/core/utils/memory/stl/AWSArray.h>

namespace Aws
{
namespace Endpoint
{
const size_t AWSPartitions::PartitionsBlobStrLen = 3656;
const size_t AWSPartitions::PartitionsBlobSize = 3657;

using PartitionsBlobT = Aws::Array<const char, AWSPartitions::PartitionsBlobSize>;
static constexpr PartitionsBlobT PartitionsBlob = {{
'{','"','p','a','r','t','i','t','i','o','n','s','"',':','[','{','"','i','d','"',':','"','a','w','s',
'"',',','"','o','u','t','p','u','t','s','"',':','{','"','d','n','s','S','u','f','f','i','x','"',':',
'"','a','m','a','z','o','n','a','w','s','.','c','o','m','"',',','"','d','u','a','l','S','t','a','c',
'k','D','n','s','S','u','f','f','i','x','"',':','"','a','p','i','.','a','w','s','"',',','"','n','a',
'm','e','"',':','"','a','w','s','"',',','"','s','u','p','p','o','r','t','s','D','u','a','l','S','t',
'a','c','k','"',':','t','r','u','e',',','"','s','u','p','p','o','r','t','s','F','I','P','S','"',':',
't','r','u','e','}',',','"','r','e','g','i','o','n','R','e','g','e','x','"',':','"','^','(','u','s',
'|','e','u','|','a','p','|','s','a','|','c','a','|','m','e','|','a','f','|','i','l',')','\\','\\','-',
'\\','\\','w','+','\\','\\','-','\\','\\','d','+','$','"',',','"','r','e','g','i','o','n','s','"',':','{',
'"','a','f','-','s','o','u','t','h','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o',
'n','"',':','"','A','f','r','i','c','a',' ','(','C','a','p','e',' ','T','o','w','n',')','"','}',',',
'"','a','p','-','e','a','s','t','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n',
'"',':','"','A','s','i','a',' ','P','a','c','i','f','i','c',' ','(','H','o','n','g',' ','K','o','n',
'g',')','"','}',',','"','a','p','-','n','o','r','t','h','e','a','s','t','-','1','"',':','{','"','d',
'e','s','c','r','i','p','t','i','o','n','"',':','"','A','s','i','a',' ','P','a','c','i','f','i','c',
' ','(','T','o','k','y','o',')','"','}',',','"','a','p','-','n','o','r','t','h','e','a','s','t','-',
'2','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','A','s','i','a',' ','P',
'a','c','i','f','i','c',' ','(','S','e','o','u','l',')','"','}',',','"','a','p','-','n','o','r','t',
'h','e','a','s','t','-','3','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"',
'A','s','i','a',' ','P','a','c','i','f','i','c',' ','(','O','s','a','k','a',')','"','}',',','"','a',
'p','-','s','o','u','t','h','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',
':','"','A','s','i','a',' ','P','a','c','i','f','i','c',' ','(','M','u','m','b','a','i',')','"','}',
',','"','a','p','-','s','o','u','t','h','-','2','"',':','{','"','d','e','s','c','r','i','p','t','i',
'o','n','"',':','"','A','s','i','a',' ','P','a','c','i','f','i','c',' ','(','H','y','d','e','r','a',
'b','a','d',')','"','}',',','"','a','p','-','s','o','u','t','h','e','a','s','t','-','1','"',':','{',
'"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','A','s','i','a',' ','P','a','c','i','f',
'i','c',' ','(','S','i','n','g','a','p','o','r','e',')','"','}',',','"','a','p','-','s','o','u','t',
'h','e','a','s','t','-','2','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"',
'A','s','i','a',' ','P','a','c','i','f','i','c',' ','(','S','y','d','n','e','y',')','"','}',',','"',
'a','p','-','s','o','u','t','h','e','a','s','t','-','3','"',':','{','"','d','e','s','c','r','i','p',
't','i','o','n','"',':','"','A','s','i','a',' ','P','a','c','i','f','i','c',' ','(','J','a','k','a',
'r','t','a',')','"','}',',','"','a','p','-','s','o','u','t','h','e','a','s','t','-','4','"',':','{',
'"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','A','s','i','a',' ','P','a','c','i','f',
'i','c',' ','(','M','e','l','b','o','u','r','n','e',')','"','}',',','"','a','w','s','-','g','l','o',
'b','a','l','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','A','W','S',' ',
'S','t','a','n','d','a','r','d',' ','g','l','o','b','a','l',' ','r','e','g','i','o','n','"','}',',',
'"','c','a','-','c','e','n','t','r','a','l','-','1','"',':','{','"','d','e','s','c','r','i','p','t',
'i','o','n','"',':','"','C','a','n','a','d','a',' ','(','C','e','n','t','r','a','l',')','"','}',',',
'"','e','u','-','c','e','n','t','r','a','l','-','1','"',':','{','"','d','e','s','c','r','i','p','t',
'i','o','n','"',':','"','E','u','r','o','p','e',' ','(','F','r','a','n','k','f','u','r','t',')','"',
'}',',','"','e','u','-','c','e','n','t','r','a','l','-','2','"',':','{','"','d','e','s','c','r','i',
'p','t','i','o','n','"',':','"','E','u','r','o','p','e',' ','(','Z','u','r','i','c','h',')','"','}',
',','"','e','u','-','n','o','r','t','h','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i',
'o','n','"',':','"','E','u','r','o','p','e',' ','(','S','t','o','c','k','h','o','l','m',')','"','}',
',','"','e','u','-','s','o','u','t','h','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i',
'o','n','"',':','"','E','u','r','o','p','e',' ','(','M','i','l','a','n',')','"','}',',','"','e','u',
'-','s','o','u','t','h','-','2','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':',
'"','E','u','r','o','p','e',' ','(','S','p','a','i','n',')','"','}',',','"','e','u','-','w','e','s',
't','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','E','u','r','o',
'p','e',' ','(','I','r','e','l','a','n','d',')','"','}',',','"','e','u','-','w','e','s','t','-','2',
'"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','E','u','r','o','p','e',' ',
'(','L','o','n','d','o','n',')','"','}',',','"','e','u','-','w','e','s','t','-','3','"',':','{','"',
'd','e','s','c','r','i','p','t','i','o','n','"',':','"','E','u','r','o','p','e',' ','(','P','a','r',
'i','s',')','"','}',',','"','i','l','-','c','e','n','t','r','a','l','-','1','"',':','{','"','d','e',
's','c','r','i','p','t','i','o','n','"',':','"','I','s','r','a','e','l',' ','(','T','e','l',' ','A',
'v','i','v',')','"','}',',','"','m','e','-','c','e','n','t','r','a','l','-','1','"',':','{','"','d',
'e','s','c','r','i','p','t','i','o','n','"',':','"','M','i','d','d','l','e',' ','E','a','s','t',' ',
'(','U','A','E',')','"','}',',','"','m','e','-','s','o','u','t','h','-','1','"',':','{','"','d','e',
's','c','r','i','p','t','i','o','n','"',':','"','M','i','d','d','l','e',' ','E','a','s','t',' ','(',
'B','a','h','r','a','i','n',')','"','}',',','"','s','a','-','e','a','s','t','-','1','"',':','{','"',
'd','e','s','c','r','i','p','t','i','o','n','"',':','"','S','o','u','t','h',' ','A','m','e','r','i',
'c','a',' ','(','S','a','o',' ','P','a','u','l','o',')','"','}',',','"','u','s','-','e','a','s','t',
'-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','U','S',' ','E','a',
's','t',' ','(','N','.',' ','V','i','r','g','i','n','i','a',')','"','}',',','"','u','s','-','e','a',
's','t','-','2','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','U','S',' ',
'E','a','s','t',' ','(','O','h','i','o',')','"','}',',','"','u','s','-','w','e','s','t','-','1','"',
':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','U','S',' ','W','e','s','t',' ',
'(','N','.',' ','C','a','l','i','f','o','r','n','i','a',')','"','}',',','"','u','s','-','w','e','s',
't','-','2','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','U','S',' ','W',
'e','s','t',' ','(','O','r','e','g','o','n',')','"','}','}','}',',','{','"','i','d','"',':','"','a',
'w','s','-','c','n','"',',','"','o','u','t','p','u','t','s','"',':','{','"','d','n','s','S','u','f',
'f','i','x','"',':','"','a','m','a','z','o','n','a','w','s','.','c','o','m','.','c','n','"',',','"',
'd','u','a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','"',':','"','a','p','i','.',
'a','m','a','z','o','n','w','e','b','s','e','r','v','i','c','e','s','.','c','o','m','.','c','n','"',
',','"','n','a','m','e','"',':','"','a','w','s','-','c','n','"',',','"','s','u','p','p','o','r','t',
's','D','u','a','l','S','t','a','c','k','"',':','t','r','u','e',',','"','s','u','p','p','o','r','t',
's','F','I','P','S','"',':','t','r','u','e','}',',','"','r','e','g','i','o','n','R','e','g','e','x',
'"',':','"','^','c','n','\\','\\','-','\\','\\','w','+','\\','\\','-','\\','\\','d','+','$','"',',','"','r',
'e','g','i','o','n','s','"',':','{','"','a','w','s','-','c','n','-','g','l','o','b','a','l','"',':',
'{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','A','W','S',' ','C','h','i','n','a',
' ','g','l','o','b','a','l',' ','r','e','g','i','o','n','"','}',',','"','c','n','-','n','o','r','t',
'h','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','C','h','i','n',
'a',' ','(','B','e','i','j','i','n','g',')','"','}',',','"','c','n','-','n','o','r','t','h','w','e',
's','t','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','C','h','i',
'n','a',' ','(','N','i','n','g','x','i','a',')','"','}','}','}',',','{','"','i','d','"',':','"','a',
'w','s','-','u','s','-','g','o','v','"',',','"','o','u','t','p','u','t','s','"',':','{','"','d','n',
's','S','u','f','f','i','x','"',':','"','a','m','a','z','o','n','a','w','s','.','c','o','m','"',',',
'"','d','u','a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','"',':','"','a','p','i',
'.','a','w','s','"',',','"','n','a','m','e','"',':','"','a','w','s','-','u','s','-','g','o','v','"',
',','"','s','u','p','p','o','r','t','s','D','u','a','l','S','t','a','c','k','"',':','t','r','u','e',
',','"','s','u','p','p','o','r','t','s','F','I','P','S','"',':','t','r','u','e','}',',','"','r','e',
'g','i','o','n','R','e','g','e','x','"',':','"','^','u','s','\\','\\','-','g','o','v','\\','\\','-','\\',
'\\','w','+','\\','\\','-','\\','\\','d','+','$','"',',','"','r','e','g','i','o','n','s','"',':','{','"',
'a','w','s','-','u','s','-','g','o','v','-','g','l','o','b','a','l','"',':','{','"','d','e','s','c',
'r','i','p','t','i','o','n','"',':','"','A','W','S',' ','G','o','v','C','l','o','u','d',' ','(','U',
'S',')',' ','g','l','o','b','a','l',' ','r','e','g','i','o','n','"','}',',','"','u','s','-','g','o',
'v','-','e','a','s','t','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':',
'"','A','W','S',' ','G','o','v','C','l','o','u','d',' ','(','U','S','-','E','a','s','t',')','"','}',
',','"','u','s','-','g','o','v','-','w','e','s','t','-','1','"',':','{','"','d','e','s','c','r','i',
'p','t','i','o','n','"',':','"','A','W','S',' ','G','o','v','C','l','o','u','d',' ','(','U','S','-',
'W','e','s','t',')','"','}','}','}',',','{','"','i','d','"',':','"','a','w','s','-','i','s','o','"',
',','"','o','u','t','p','u','t','s','"',':','{','"','d','n','s','S','u','f','f','i','x','"',':','"',
'c','2','s','.','i','c','.','g','o','v','"',',','"','d','u','a','l','S','t','a','c','k','D','n','s',
'S','u','f','f','i','x','"',':','"','c','2','s','.','i','c','.','g','o','v','"',',','"','n','a','m',
'e','"',':','"','a','w','s','-','i','s','o','"',',','"','s','u','p','p','o','r','t','s','D','u','a',
'l','S','t','a','c','k','"',':','f','a','l','s','e',',','"','s','u','p','p','o','r','t','s','F','I',
'P','S','"',':','t','r','u','e','}',',','"','r','e','g','i','o','n','R','e','g','e','x','"',':','"',
'^','u','s','\\','\\','-','i','s','o','\\','\\','-','\\','\\','w','+','\\','\\','-','\\','\\','d','+','$','"',
',','"','r','e','g','i','o','n','s','"',':','{','"','a','w','s','-','i','s','o','-','g','l','o','b',
'a','l','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','A','W','S',' ','I',
'S','O',' ','(','U','S',')',' ','g','l','o','b','a','l',' ','r','e','g','i','o','n','"','}',',','"',
'u','s','-','i','s','o','-','e','a','s','t','-','1','"',':','{','"','d','e','s','c','r','i','p','t',
'i','o','n','"',':','"','U','S',' ','I','S','O',' ','E','a','s','t','"','}',',','"','u','s','-','i',
's','o','-','w','e','s','t','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o','n','"',
':','"','U','S',' ','I','S','O',' ','W','E','S','T','"','}','}','}',',','{','"','i','d','"',':','"',
'a','w','s','-','i','s','o','-','b','"',',','"','o','u','t','p','u','t','s','"',':','{','"','d','n',
's','S','u','f','f','i','x','"',':','"','s','c','2','s','.','s','g','o','v','.','g','o','v','"',',',
'"','d','u','a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','"',':','"','s','c','2',
's','.','s','g','o','v','.','g','o','v','"',',','"','n','a','m','e','"',':','"','a','w','s','-','i',
's','o','-','b','"',',','"','s','u','p','p','o','r','t','s','D','u','a','l','S','t','a','c','k','"',
':','f','a','l','s','e',',','"','s','u','p','p','o','r','t','s','F','I','P','S','"',':','t','r','u',
'e','}',',','"','r','e','g','i','o','n','R','e','g','e','x','"',':','"','^','u','s','\\','\\','-','i',
's','o','b','\\','\\','-','\\','\\','w','+','\\','\\','-','\\','\\','d','+','$','"',',','"','r','e','g','i',
'o','n','s','"',':','{','"','a','w','s','-','i','s','o','-','b','-','g','l','o','b','a','l','"',':',
'{','"','d','e','s','c','r','i','p','t','i','o','n','"',':','"','A','W','S',' ','I','S','O','B',' ',
'(','U','S',')',' ','g','l','o','b','a','l',' ','r','e','g','i','o','n','"','}',',','"','u','s','-',
'i','s','o','b','-','e','a','s','t','-','1','"',':','{','"','d','e','s','c','r','i','p','t','i','o',
'n','"',':','"','U','S',' ','I','S','O','B',' ','E','a','s','t',' ','(','O','h','i','o',')','"','}',
'}','}',',','{','"','i','d','"',':','"','a','w','s','-','i','s','o','-','e','"',',','"','o','u','t',
'p','u','t','s','"',':','{','"','d','n','s','S','u','f','f','i','x','"',':','"','c','l','o','u','d',
'.','a','d','c','-','e','.','u','k','"',',','"','d','u','a','l','S','t','a','c','k','D','n','s','S',
'u','f','f','i','x','"',':','"','c','l','o','u','d','.','a','d','c','-','e','.','u','k','"',',','"',
'n','a','m','e','"',':','"','a','w','s','-','i','s','o','-','e','"',',','"','s','u','p','p','o','r',
't','s','D','u','a','l','S','t','a','c','k','"',':','f','a','l','s','e',',','"','s','u','p','p','o',
'r','t','s','F','I','P','S','"',':','t','r','u','e','}',',','"','r','e','g','i','o','n','R','e','g',
'e','x','"',':','"','^','e','u','\\','\\','-','i','s','o','e','\\','\\','-','\\','\\','w','+','\\','\\','-',
'\\','\\','d','+','$','"',',','"','r','e','g','i','o','n','s','"',':','{','}','}',',','{','"','i','d',
'"',':','"','a','w','s','-','i','s','o','-','f','"',',','"','o','u','t','p','u','t','s','"',':','{',
'"','d','n','s','S','u','f','f','i','x','"',':','"','c','s','p','.','h','c','i','.','i','c','.','g',
'o','v','"',',','"','d','u','a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','"',':',
'"','c','s','p','.','h','c','i','.','i','c','.','g','o','v','"',',','"','n','a','m','e','"',':','"',
'a','w','s','-','i','s','o','-','f','"',',','"','s','u','p','p','o','r','t','s','D','u','a','l','S',
't','a','c','k','"',':','f','a','l','s','e',',','"','s','u','p','p','o','r','t','s','F','I','P','S',
'"',':','t','r','u','e','}',',','"','r','e','g','i','o','n','R','e','g','e','x','"',':','"','^','u',
's','\\','\\','-','i','s','o','f','\\','\\','-','\\','\\','w','+','\\','\\','-','\\','\\','d','+','$','"',',',
'"','r','e','g','i','o','n','s','"',':','{','}','}',']',',','"','v','e','r','s','i','o','n','"',':',
'"','1','.','1','"','}','\0'
}};

const char* AWSPartitions::GetPartitionsBlob()
{
    return PartitionsBlob.data();
}

} // namespace Endpoint
} // namespace Aws
