#include<stdio.h>
#include<curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res;
  
  curl=curl_easy_init();
  if(curl){
    curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
    res=curl_easy_perform(curl);
    if(res!=CRULE_OK)
      fprintf(stderr,"curl_easy_perform()faild:%s\n",
            curl_easy_sterror(res))
      curl_easy_cleanup(curl);
  }
  return 0;
  }
