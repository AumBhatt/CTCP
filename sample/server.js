const net = require('net');
const server = net.createServer((socket) => {
    socket.end("Closing server...")
}).on('error', (err) => {
    throw err;
});

server.listen(() => {
    console.log("Listening @ ", server.address());
});