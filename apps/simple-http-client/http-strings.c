/*
 * Copyright (c) 2012, Thingsquare, http://www.thingsquare.com/.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
const char http_http[8] = 
/* "http://" */
{0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, };
const char http_200[5] = 
/* "200 " */
{0x32, 0x30, 0x30, 0x20, };
const char http_301[5] = 
/* "301 " */
{0x33, 0x30, 0x31, 0x20, };
const char http_302[5] = 
/* "302 " */
{0x33, 0x30, 0x32, 0x20, };
const char http_get[5] = 
/* "GET " */
{0x47, 0x45, 0x54, 0x20, };
const char http_10[9] = 
/* "HTTP/1.0" */
{0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, };
const char http_11[9] = 
/* "HTTP/1.1" */
{0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x31, };
const char http_content_type[15] = 
/* "content-type: " */
{0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, };
const char http_texthtml[10] = 
/* "text/html" */
{0x74, 0x65, 0x78, 0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, };
const char http_location[11] = 
/* "location: " */
{0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, };
const char http_host[7] = 
/* "host: " */
{0x68, 0x6f, 0x73, 0x74, 0x3a, 0x20, };
const char http_crnl[3] = 
/* "\r\n" */
{0xd, 0xa, };
const char http_index_html[12] = 
/* "/index.html" */
{0x2f, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 0x74, 0x6d, 0x6c, };
const char http_404_html[10] = 
/* "/404.html" */
{0x2f, 0x34, 0x30, 0x34, 0x2e, 0x68, 0x74, 0x6d, 0x6c, };
const char http_referer[9] = 
/* "Referer:" */
{0x52, 0x65, 0x66, 0x65, 0x72, 0x65, 0x72, 0x3a, };
const char http_header_200[85] = 
/* "HTTP/1.0 200 OK\r\nServer: Contiki/2.6 http://www.contiki-os.org/\r\nConnection: close\r\n" */
{0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0xd, 0xa, 0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x69, 0x6b, 0x69, 0x2f, 0x32, 0x2e, 0x36, 0x20, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x77, 0x77, 0x77, 0x2e, 0x63, 0x6f, 0x6e, 0x74, 0x69, 0x6b, 0x69, 0x2d, 0x6f, 0x73, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0xd, 0xa, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0xd, 0xa, };
const char http_header_404[92] = 
/* "HTTP/1.0 404 Not found\r\nServer: Contiki/2.6 http://www.contiki-os.org/\r\nConnection: close\r\n" */
{0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x34, 0x30, 0x34, 0x20, 0x4e, 0x6f, 0x74, 0x20, 0x66, 0x6f, 0x75, 0x6e, 0x64, 0xd, 0xa, 0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x69, 0x6b, 0x69, 0x2f, 0x32, 0x2e, 0x36, 0x20, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x77, 0x77, 0x77, 0x2e, 0x63, 0x6f, 0x6e, 0x74, 0x69, 0x6b, 0x69, 0x2d, 0x6f, 0x73, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0xd, 0xa, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0xd, 0xa, };
const char http_content_type_plain[29] = 
/* "Content-type: text/plain\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x70, 0x6c, 0x61, 0x69, 0x6e, 0xd, 0xa, 0xd, 0xa, };
const char http_content_type_html[28] = 
/* "Content-type: text/html\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0xd, 0xa, 0xd, 0xa, };
const char http_content_type_css [27] = 
/* "Content-type: text/css\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x63, 0x73, 0x73, 0xd, 0xa, 0xd, 0xa, };
const char http_content_type_text[28] = 
/* "Content-type: text/text\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x74, 0x65, 0x78, 0x74, 0xd, 0xa, 0xd, 0xa, };
const char http_content_type_png [28] = 
/* "Content-type: image/png\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x2f, 0x70, 0x6e, 0x67, 0xd, 0xa, 0xd, 0xa, };
const char http_content_type_gif [28] = 
/* "Content-type: image/gif\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x2f, 0x67, 0x69, 0x66, 0xd, 0xa, 0xd, 0xa, };
const char http_content_type_jpg [29] = 
/* "Content-type: image/jpeg\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x2f, 0x6a, 0x70, 0x65, 0x67, 0xd, 0xa, 0xd, 0xa, };
const char http_content_type_binary[43] = 
/* "Content-type: application/octet-stream\r\n\r\n" */
{0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2f, 0x6f, 0x63, 0x74, 0x65, 0x74, 0x2d, 0x73, 0x74, 0x72, 0x65, 0x61, 0x6d, 0xd, 0xa, 0xd, 0xa, };
const char http_html[6] = 
/* ".html" */
{0x2e, 0x68, 0x74, 0x6d, 0x6c, };
const char http_htm[5] = 
/* ".htm" */
{0x2e, 0x68, 0x74, 0x6d, };
const char http_css[5] = 
/* ".css" */
{0x2e, 0x63, 0x73, 0x73, };
const char http_png[5] = 
/* ".png" */
{0x2e, 0x70, 0x6e, 0x67, };
const char http_gif[5] = 
/* ".gif" */
{0x2e, 0x67, 0x69, 0x66, };
const char http_jpg[5] = 
/* ".jpg" */
{0x2e, 0x6a, 0x70, 0x67, };
const char http_text[6] = 
/* ".text" */
{0x2e, 0x74, 0x65, 0x78, 0x74, };
const char http_txt[5] = 
/* ".txt" */
{0x2e, 0x74, 0x78, 0x74, };
