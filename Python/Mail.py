#!/usr/bin/python

import smtplib
import base64

filename = "G:\Py\Add.py"

# Read a file and encode it into base64 format
fo = open(filename, "rb")
filecontent = fo.read()
encodedcontent = base64.b64encode(filecontent)  # base64

sender = 'bhavy.rajgupta@gmail.com'
reciever = 'bhavy.rajgupta@gmail.com'

marker = "AUNQUEMARKER"

body ="""
This is a test mail to send an attachement.
"""
# Define the main headers.
part1 = """From: FroPerson <me@fromdomain.net>
To: To Person <amrod.admin@gmail.com>
Subject: SendingAttachement
MIME-Version: .0
Content-Type:multipart/mixed; boundary=%s
--%s
""" % (marker, marker)

# Define the message action
part2 = """Cotent-Type: text/plain
Content-Trnsfer-Encoding:8bit

%s
--%s
""" % (body,marker)

# Define the attachment section
part3 = """Content-Type: multipart/mixed; name=\"%s\"
Content-Transfer-Encodingbase64
Content-Disposition: attacment; filename=%s

%s
--%s--
""" %(filename, filename, encodedcontent, marker)
message = part1 + part2 + part3

try:
   smtpObj = smtplib.SMTP('localhost')
   smtpObj.sendmail(sender, reciever, message)
   print("Successfully sent email")
except Exception:
   print("Error: unable to send email")
