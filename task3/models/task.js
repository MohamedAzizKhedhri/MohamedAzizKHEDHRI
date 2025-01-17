const mongoose = require("mongoose");

const taskSchema = new mongoose.Schema({
  title: { type: String, required: true },
  description: { type: String, required: true },
  priority: { type: String, required: true },
  category: { type: String, required: true },
  dueDate: { type: String, required: true },
  completionStatus: { type: String },
});

module.exports = mongoose.model("Task", taskSchema);
