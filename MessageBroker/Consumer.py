import pika, sys, os
class Consumer:
    def __init__(self):
        self.queue = None
        self.connection = pika.BlockingConnection(pika.ConnectionParameters('localhost'))
        self.channel = self.connection.channel()

    def declare_queue(self, name):
        self.channel.queue_declare(queue=name)

    def consume_data(self, queueName, callbackFunction):
        self.channel.basic_consume(queue=queueName, on_message_callback=callbackFunction, auto_ack=True)

    def start_consuming(self):
        self.channel.start_consuming()
        # tries = 10
        # while tries>0:
        #     try:
        #         self.channel.start_consuming()
        #         tries -=1
        #     except:
        #         if tries == 1:
        #             print("connection with pika failed")
        #             tries -= 1

    def close_connection(self):
        self.connection.close()

def callback(ch, method, properties, body):
    print(" [x] Received %r" % body)

